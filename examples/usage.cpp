// -*- c++ -*-
/* This file is a part of term-colors.
 * Copyright (C) 2012, Patrick M. Niedzielski.
 * All rights reserved.
 *
 * See accompanying COPYING.bsd file for the license.  When
 * distributing this file independently , it's a good idea to replace
 * this reference with the full license.
 */

#include "../termcolors.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    cout << termcolors::foreground_color(termcolors::colors::red)
         << "This is in dark red."
         << termcolors::bright
         << "But now in bright red."
         << endl
         << termcolors::foreground_color(termcolors::colors::reset)
         << termcolors::background_color(termcolors::colors::cyan)
         << 52
         << termcolors::reset
         << endl;

    return 0;
}
