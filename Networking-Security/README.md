# ECE Pulse Software Competition

## Networking/Security Competition

### Level 1: Send data over sockets

Start the local server by running `python level1-server.py`, which operates on `localhost`, port 8888.

Send the server ("localhost", 8080 for port) the following string, without quotes: "ECE PULSE 2016", and output the server's response. If it successfully prints out "Thanks for competing", you've succeeded in this challenge!

### Level 2: Buffer overflows

In `level2.c` there is some vulnerable code. Compile it and try to get the output to say "Access Granted" regardless of what `argv[1]` is.

### Level 3: Simplified Heartbleed Emulation

Run the level3 (COMING SOON) binary (must be on a Linux EWS Machine) to start the local server. The server ("localhost", 8080 for port) is vulnerable to a bug similar to Heartbleed. Create a program to exploit this vulnerability to get the private key. You can send a string in the format "<WORD>-<Length>" and expect a response. For example, you can send "HELLO-5", and you will get the following response: "HELLO", under normal circumstances. 

### Level 4: Simple HTTP Server

Write a server that processes simple HTTP GET requests and sets the status code, `Content-Type`, and `Content-Length` headers appropriately. We will test this against the following file formats: .txt, .html, .css, .js. You may have to do some research as to what the correct HTTP request and response format is! Please make the port number `8080`.

Note: YOU MUST WRITE THIS IN C or C++! Java and Python (or other languages) are not allowed!

When we test your code, we will run it on a computer and attempt to run a GET request on some example file and `diff` the output. You can expect the request to be something like `GET index.html` or `GET style.css`, and your code should return the contents of that file with the proper headers and status codes (you only have to worry about 200 and 404).
