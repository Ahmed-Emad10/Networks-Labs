//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "P2.h"

Define_Module(P2);

void P2::initialize()
{
    // TODO - Generated method body
}

void P2::handleMessage(cMessage *msg)
{
    // TODO - Generated method body
    if(strcmp(msg->getName(),"correct guess")==0)
    {
        cancelAndDelete(msg);
        finish();
    }
    else
    {
        y = int(uniform(0,10));

        itoa(y,buffer,10);
        msg->setName(buffer);
        EV<<msg->getName()<<endl;

        send(msg,"P2_out");

    }
}
