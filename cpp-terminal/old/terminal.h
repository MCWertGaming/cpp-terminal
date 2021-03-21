#ifndef TERMINAL_H
#define TERMINAL_H

/* This file is all platform independent, it contains the logic to build
 * the features that users need in a terminal application.
 *
 * The ANSI escape sequences used here are supported by all terminals (Linux,
 * macOS, Windows). All the functionality here must work on all platforms. The
 * Windows terminal is probably the most limiting, and so we restrict to the
 * capabilities that it supports, as documented at:
 *
 * https://docs.microsoft.com/en-us/windows/console/console-virtual-terminal-sequences
 */

#include <cpp-terminal/terminal_base.h>
#include <functional>
#include <iostream>
#include <string>
#include <thread>
#include <vector>

namespace Term {





#endif  // TERMINAL_H
