#include <iostream>
#include <mavlink.h>
#include <usb.h>

void ceate_mavlink_ping_msg () {

    mavlink_message_t msg;
    
    mavlink_ping_t ping_data;
    ping_data.time_usec = 8758;
    ping_data.seq = 3;
    ping_data.target_system = 0;
    ping_data.target_component = 0;
    
    uint16_t res;
    res = mavlink_msg_ping_pack(1, 1, &msg, ping_data.time_usec, ping_data.seq, ping_data.target_system, ping_data.target_component);
    
    std::cout << res;
    std::cout << "\n";
    std::cout << msg.msgid;
    std::cout << "\n";
}
 
int main()
{
    std::cout << "Hello World !\n";
    
    ceate_mavlink_ping_msg ();
    
}
