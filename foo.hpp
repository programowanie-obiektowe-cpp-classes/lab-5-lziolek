#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::vector<char> lubi_zwierze;
    for (auto &p : people)
    {
        p.birthday();
        if(p.isMonster())
        {
            lubi_zwierze.push_back('n');
        }
        else {lubi_zwierze.push_back('y');}
    }
    std::reverse(lubi_zwierze.begin(),lubi_zwierze.end());
    return {lubi_zwierze};
}
