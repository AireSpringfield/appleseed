
//
// This source file is part of appleseed.
// Visit https://appleseedhq.net/ for additional information and resources.
//
// This software is released under the MIT license.
//
// Copyright (c) 2014-2018 Francois Beaune, The appleseedhq Organization
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#ifndef APPLESEED_MAKEFLUFFY_COMMANDLINEHANDLER_H
#define APPLESEED_MAKEFLUFFY_COMMANDLINEHANDLER_H

// appleseed.shared headers.
#include "application/commandlinehandlerbase.h"

// appleseed.foundation headers.
#include "foundation/utility/commandlineparser.h"

// Standard headers.
#include <cstddef>
#include <string>

// Forward declarations.
namespace appleseed { namespace shared { class SuperLogger; } }

namespace appleseed {
namespace makefluffy {

//
// Command line handler.
//

class CommandLineHandler
  : public shared::CommandLineHandlerBase
{
  public:
    foundation::ValueOptionHandler<std::string>     m_filenames;
    foundation::ValueOptionHandler<size_t>          m_curves;
    foundation::ValueOptionHandler<double>          m_length;
    foundation::ValueOptionHandler<double>          m_length_fuzziness;
    foundation::ValueOptionHandler<double>          m_root_width;
    foundation::ValueOptionHandler<double>          m_tip_width;
    foundation::ValueOptionHandler<double>          m_curliness;
    foundation::ValueOptionHandler<size_t>          m_presplits;
    foundation::ValueOptionHandler<std::string>     m_include;
    foundation::ValueOptionHandler<std::string>     m_exclude;

    // Constructor.
    CommandLineHandler();

  private:
    // Emit usage instructions to the logger.
    void print_program_usage(
        const char*             executable_name,
        shared::SuperLogger&    logger) const override;
};

}       // namespace makefluffy
}       // namespace appleseed

#endif  // !APPLESEED_MAKEFLUFFY_COMMANDLINEHANDLER_H
