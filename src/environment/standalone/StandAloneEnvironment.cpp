/*
 *   AviTab - Aviator's Virtual Tablet
 *   Copyright (C) 2018 Folke Will <folko@solhost.org>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU Affero General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Affero General Public License for more details.
 *
 *   You should have received a copy of the GNU Affero General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#include "StandAloneEnvironment.h"
#include "src/Logger.h"

namespace avitab {

StandAloneEnvironment::StandAloneEnvironment():
    driver(std::make_shared<SDLGUIDriver>())
{
}

void StandAloneEnvironment::eventLoop() {
    if (driver) {
        driver->eventLoop();
    }
}

std::shared_ptr<LVGLToolkit> StandAloneEnvironment::createGUIToolkit() {
    return std::make_shared<LVGLToolkit>(driver);
}

void StandAloneEnvironment::createMenu(const std::string& name) {
}

void StandAloneEnvironment::addMenuEntry(const std::string& label, std::function<void()> cb) {
}

} /* namespace avitab */
