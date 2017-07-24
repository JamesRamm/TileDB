/**
 * @file   metadata_iterator.cc
 *
 * @section LICENSE
 *
 * The MIT License
 *
 * @copyright Copyright (c) 2017 TileDB, Inc.
 * @copyright Copyright (c) 2016 MIT and Intel Corporation
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
 *
 * @section DESCRIPTION
 *
 * This file implements the MetadataIterator class.
 */

#include "metadata_iterator.h"

namespace tiledb {

/* ****************************** */
/*   CONSTRUCTORS & DESTRUCTORS   */
/* ****************************** */

MetadataIterator::MetadataIterator() {
  array_it_ = nullptr;
}

MetadataIterator::~MetadataIterator() = default;

/* ****************************** */
/*              API               */
/* ****************************** */

/*

const std::string& MetadataIterator::metadata_name() const {
return array_it_->array_name();
}

bool MetadataIterator::end() const {
return array_it_->end();
}

Status MetadataIterator::get_value(
int attribute_id, const void** value, size_t* value_size) const {
RETURN_NOT_OK(array_it_->get_value(attribute_id, value, value_size));
return Status::Ok();
}

Status MetadataIterator::finalize() {
Status st = array_it_->finalize();
delete array_it_;
array_it_ = nullptr;
delete metadata_;
metadata_ = nullptr;
return st;
}

Status MetadataIterator::init(
Metadata* metadata, void** buffers, size_t* buffer_sizes) {
// Initialize an array iterator
metadata_ = metadata;
array_it_ = new ArrayIterator();
Status st = array_it_->init(metadata->array(), buffers, buffer_sizes);
if (!st.ok()) {
delete array_it_;
array_it_ = nullptr;
}
return st;
}

Status MetadataIterator::next() {
return array_it_->next();
}

 */

};  // namespace tiledb
