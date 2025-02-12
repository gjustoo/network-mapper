

# NAIVE Network Mapper/ Scanner

Written in C.


## Description

This is a simple network scanner that scans a range of ips and gets its info . It is written in C and uses raw sockets to send and receive packets.

Returns the IP address and the information of the header response of the given port.

## Usage

To use the scanner, you need to compile the code using the makefile. You can do this by running the following command in the terminal:

```bash
make
```

After compiling the code, you can run the scanner by running the following command in the terminal:

```bash
./netmap-naive <port> [start_ip] [end_ip]
```
It can also get the ip through pipe:

```bash
echo " <port> [start_ip] [end_ip] " | ./netmap-naive
```


Where:

- `<port>` is the port number to scan.
- `[start_ip]` is the starting IP address of the range to scan.
- `[end_ip]` is the ending IP address of the range to scan.

