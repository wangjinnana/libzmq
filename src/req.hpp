/*
    Copyright (c) 2007-2009 FastMQ Inc.

    This file is part of 0MQ.

    0MQ is free software; you can redistribute it and/or modify it under
    the terms of the Lesser GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    0MQ is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    Lesser GNU General Public License for more details.

    You should have received a copy of the Lesser GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __ZMQ_REQ_HPP_INCLUDED__
#define __ZMQ_REQ_HPP_INCLUDED__

#include "socket_base.hpp"

namespace zmq
{

    class req_t : public socket_base_t
    {
    public:

        req_t (class app_thread_t *thread_, class session_t *session_);

    private:

        req_t (const req_t&);
        void operator = (const req_t&);
    };

}

#endif
