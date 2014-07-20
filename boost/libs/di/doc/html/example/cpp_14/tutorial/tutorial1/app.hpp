//
// Copyright (c) 2014 Krzysztof Jusiak (krzysztof at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

//[tutorial1_app]
//<-
#ifndef BOOST_DI_EXAMPLE_CPP_14_TUTORIAL_TUTORIAL1_APP_HPP
#define BOOST_DI_EXAMPLE_CPP_14_TUTORIAL_TUTORIAL1_APP_HPP

#include <memory>
//->

class app {
public:
    app(const std::string& text, int value)
        : text_(text), value_(value)
    { }

    void run() {
        if (value_) {
            std::cout << text_ << std::endl;
        }
    }

private:
    std::string text_;
    int value_ = 0;
};

//<-
#endif
//->

//]

