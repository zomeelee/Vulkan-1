/**
 * VKTS - VulKan ToolS.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) since 2014 Norbert Nopper
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef VKTS_ITEXTBUFFER_HPP_
#define VKTS_ITEXTBUFFER_HPP_

#include <vkts/core.hpp>

namespace vkts
{

class ITextBuffer: public ICloneable<ITextBuffer>
{

public:

    ITextBuffer() :
        ICloneable<ITextBuffer>()
    {
    }

    virtual ~ITextBuffer()
    {
    }

    virtual const char* getString() const = 0;

    virtual size_t getLength() const = 0;

    virtual VkBool32 seek(const int64_t offset, const VkTsSearch search) = 0;

    virtual const char* gets(char* str, const size_t num) = 0;

    virtual VkBool32 puts(const char* str) = 0;

};

typedef std::shared_ptr<ITextBuffer> ITextBufferSP;

} /* namespace vkts */

#endif /* VKTS_ITEXTBUFFER_HPP_ */
