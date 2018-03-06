#ifndef __WEB_INTERFACE_STYLES_CSS_H
#define __WEB_INTERFACE_STYLES_CSS_H

#if defined(__ICCARM__)
#pragma location = \
    .qspi static const char styles_css[] = {
#else
__attribute__((section(".qspi"))) static const char styles_css[]= {
#endif

"HTTP/1.0 200 OK\r\n"
"Server: lwIP/pre-0.6\r\n"
"Content-type: text/css\r\n\r\n"

".button {\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"    color: black;\n"
"    padding: 14px 28px;\n"
"    font-size: 16px;\n"
"    cursor: pointer;\n"
"    margin-right: 16px;\n"
"    margin-top: 16px;\n"
"    margin-bottom: 16px;\n"
"}\n"
"\n"
".button_start {\n"
"    border-color: #4CAF50;\n"
"    color: green;\n"
"}\n"
"\n"
".button_start:hover {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"}\n"
"\n"
".button_stop {\n"
"    border-color: red;\n"
"    color: red;\n"
"}\n"
"\n"
".button_stop:hover {\n"
"    background-color: red;\n"
"    color: white;\n"
"}\n"
"\n"
".check_box {\n"
"    border: 2px solid black;\n"
"    background-color: white;\n"
"    padding: 14px 28px;\n"
"}\n"
"\n"
".card {\n"
"    box-shadow: 0 4px 8px 0 rgba(0, 0, 0, 0.2);\n"
"    transition: 0.3s;\n"
"    padding: 2px 16px;\n"
"    margin-top: 16px;\n"
"    border-radius: 5px;\n"
"    background-color: white;\n"
"}\n"
"\n"
".card:hover {\n"
"    box-shadow: 0 8px 16px 0 rgba(0, 0, 0, 0.2);\n"
"}\n"
"\n"
".container {\n"
"    padding: 2px 16px;\n"
"    background-color: white;\n"
"    padding-bottom: 16px;\n"
"}\n"
"\n"
".file_list_line {\n"
"    border-left: 6px solid green;\n"
"    height: 100%;\n"
"    position: absolute;\n"
"    left: 10%;\n"
"    margin-left: -3px;\n"
"    top: 0;\n"
"}\n"
"\n"
".file_list_text {\n"
"    font-size: 18px;\n"
"    font-family: Roboto;\n"
"    color: darkgray;\n"
"    text-decoration: none;\n"
"    display: block;\n"
"}\n"
"\n"
".sub_title {\n"
"    margin-left: 150 px;\n"
"    font-size: 18px;\n"
"    font-family: Roboto;\n"
"    color: #2196F3;\n"
"    text-decoration: none;\n"
"    display: block;\n"
"}\n"
"\n"
".switch_title {\n"
"    font-size: 12px;\n"
"    font-family: Roboto;\n"
"    color: gray;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"}\n"
"\n"
".voltage_text {\n"
"    font-size: 24px;\n"
"    font-family: Roboto;\n"
"    color: black;\n"
"    opacity: 0.8;\n"
"}\n"
"\n"
".body {\n"
"    background-color: lightgray;\n"
"}\n"
"\n"
".switch {\n"
"    position: relative;\n"
"    display: inline-block;\n"
"    width: 60px;\n"
"    height: 34px;\n"
"    margin-right: 16px;\n"
"    vertical-align: middle;\n"
"}\n"
"\n"
".switch input {\n"
"    display: none;\n"
"}\n"
"\n"
".slider {\n"
"    position: absolute;\n"
"    cursor: pointer;\n"
"    top: 0;\n"
"    left: 0;\n"
"    right: 0;\n"
"    bottom: 0;\n"
"    background-color: #ccc;\n"
"    -webkit-transition: .4s;\n"
"    transition: .4s;\n"
"    vertical-align: middle;\n"
"}\n"
"\n"
".slider:before {\n"
"    position: absolute;\n"
"    content: \"\";\n"
"    height: 26px;\n"
"    width: 26px;\n"
"    left: 4px;\n"
"    bottom: 4px;\n"
"    background-color: white;\n"
"    -webkit-transition: .4s;\n"
"    transition: .4s;\n"
"}\n"
"\n"
"input:checked+.slider {\n"
"    background-color: #2196F3;\n"
"}\n"
"\n"
"input:focus+.slider {\n"
"    box-shadow: 0 0 1px #2196F3;\n"
"}\n"
"\n"
"input:checked+.slider:before {\n"
"    -webkit-transform: translateX(26px);\n"
"    -ms-transform: translateX(26px);\n"
"    transform: translateX(26px);\n"
"}\n"
"\n"
".slider.round {\n"
"    border-radius: 34px;\n"
"}\n"
"\n"
".slider.round:before {\n"
"    border-radius: 50%;\n"
"}\n"
};


#endif