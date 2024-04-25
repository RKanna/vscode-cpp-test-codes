#include <iostream>
#include <boost/asio.hpp>
#include <winsock2.h>

using namespace boost::asio;

int main() {
    try {
        io_service io;
        serial_port port(io, "COM3"); // Change to your COM port name

        // Set serial port settings
        port.set_option(serial_port_base::baud_rate(9600));
        port.set_option(serial_port_base::flow_control(serial_port_base::flow_control::none));
        port.set_option(serial_port_base::parity(serial_port_base::parity::none));
        port.set_option(serial_port_base::stop_bits(serial_port_base::stop_bits::one));
        port.set_option(serial_port_base::character_size(8));

        // Simple write operation
        write(port, buffer("Hello, serial port!"));

        // Simple read operation
        char buf[100];
        size_t len = read(port, buffer(buf, sizeof(buf)));
        std::cout << "Received: " << std::string(buf, len) << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

