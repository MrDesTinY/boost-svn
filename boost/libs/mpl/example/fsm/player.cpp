//-----------------------------------------------------------------------------
// boost fsm/example/player.cpp source file
// See http://www.boost.org for updates, documentation, and revision history.
//-----------------------------------------------------------------------------
//
// Copyright 2002
// Aleksey Gurtovoy
//
// Permission to use, copy, modify, distribute and sell this software
// and its documentation for any purpose is hereby granted without fee, 
// provided that the above copyright notice appears in all copies and 
// that both the copyright notice and this permission notice appear in 
// supporting documentation. No representations are made about the 
// suitability of this software for any purpose. It is provided "as is" 
// without express or implied warranty.

#include <state_machine.hpp>
#include <boost/mpl/list.hpp>

#include <iostream>

namespace mpl = boost::mpl;

class player
    : public fsm::state_machine<player>
{
 public:
    player() {}

    // events
    struct play_event : event<play_event> {};
    struct stop_event : event<stop_event> {};
    struct pause_event : event<pause_event> {};

// MWCW 8.1 is too eager in inforcing access for non-type template parameters
// private:
    typedef player self_t;
    
    // state invariants
    void stopped_state_invariant() const {}
    void playing_state_invariant() const {}
    void paused_state_invariant() const {}

    // states (invariants are passed as non-type template arguments)
    typedef state<0, &self_t::stopped_state_invariant> stopped;
    typedef state<1, &self_t::playing_state_invariant> playing;
    typedef state<2, &self_t::paused_state_invariant> paused;

// private:

    // transition functions
    bool do_play(play_event const&) { std::cout << "player::do_play\n"; return true; }
    bool do_stop(stop_event const&) { std::cout << "player::do_stop\n"; return true; }
    bool do_pause(pause_event const&) { std::cout << "player::do_pause\n"; return true; }
    bool do_resume(play_event const&) { std::cout << "player::do_resume\n"; return true; }
    
    // transitions, in the following format:
    // | current state | event | next state | transition function |
    friend class fsm::state_machine<player>;
    typedef mpl::list<
          transition<stopped, play_event,  playing, &player::do_play>
        , transition<playing, stop_event,  stopped, &player::do_stop>
        , transition<playing, pause_event, paused,  &player::do_pause>
        , transition<paused,  play_event,  playing, &player::do_resume>
        , transition<paused,  stop_event,  stopped, &player::do_stop>
        >::type transition_table;
        
    typedef stopped initial_state;
};

int main()
{
    player p;
    p.process_event(player::play_event());
    p.process_event(player::pause_event());
    p.process_event(player::play_event());
    p.process_event(player::stop_event());
    return 0;
}
