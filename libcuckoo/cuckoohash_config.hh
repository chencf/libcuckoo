/** \file */

#ifndef _CUCKOOHASH_CONFIG_HH
#define _CUCKOOHASH_CONFIG_HH

#include <cstddef>
#include <limits>

//! The default maximum number of keys per bucket
constexpr size_t LIBCUCKOO_DEFAULT_SLOT_PER_BUCKET = 4;

//! The default number of elements in an empty hash table
constexpr size_t LIBCUCKOO_DEFAULT_SIZE =
    (1U << 16) * LIBCUCKOO_DEFAULT_SLOT_PER_BUCKET;

//! The default minimum load factor that the table allows for automatic
//! expansion. It must be a number between 0.0 and 1.0. The table will throw
//! libcuckoo_load_factor_too_low if the load factor falls below this value
//! during an automatic expansion.
/*
 表允许自动的默认最小加载因子扩张。 它必须是介于0.0和1.0之间的数字。
 如果在自动扩展期间加载因子低于此值，则表将抛出libcuckoo_load_factor_too_low。
 */
constexpr double LIBCUCKOO_DEFAULT_MINIMUM_LOAD_FACTOR = 0.05;

//! An alias for the value that sets no limit on the maximum hashpower. If this
//! value is set as the maximum hashpower limit, there will be no limit. This
//! is also the default initial value for the maximum hashpower in a table.
/*
 值的别名，对最大哈希值没有限制。 如果将此值设置为最大散列函数限制，则不会有任何限制。 这也是表中最大哈希值的默认初始值。
 */
constexpr size_t LIBCUCKOO_NO_MAXIMUM_HASHPOWER =
    std::numeric_limits<size_t>::max();

//! set LIBCUCKOO_DEBUG to 1 to enable debug output
#define LIBCUCKOO_DEBUG 0

#endif // _CUCKOOHASH_CONFIG_HH
