/*
 * Copyright (C) 2019-2020 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef PLUGINS_SIMULATION_H
#define PLUGINS_SIMULATION_H

#include "traffic_editor/building.h"

class Simulation
{
public:
  virtual ~Simulation() = default;

  virtual void tick(Building& building) = 0;
  virtual void reset(Building& building) = 0;
};

#endif
