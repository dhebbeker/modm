/*
 * Copyright (c) 2017, Niklas Hauser
 *
 * This file is part of the modm project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */


#include <modm/platform.hpp>
#include <modm/architecture/interface/delay.hpp>

int
main(void)
{
    while (true)
    {
        modm::delayMilliseconds(500);
    }

    return 0;
}
