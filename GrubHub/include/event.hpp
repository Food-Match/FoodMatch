#pragma once

#include <bits/stdc++.h>
#include "order.hpp"

using namespace std;

// Pickup or Deliver event of an order
class event{
public:
    // Order for which the event is
    order order_obj;

    // Event Coordinates
    double x, y;
    string loc_id;

    // Pickup : 0, Deliver : 1
    int type;

    // constructor - event of order ord of type et
    event();

    // constructor - event of order ord of type et
    event(order ord, int et);

    bool operator==(const event& other);

    // returns event as string
    string str_val();
};
