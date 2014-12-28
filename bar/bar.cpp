#include "bar/bar.h"

#include <iostream>
#include <string>
#include "common/common.h"
#include "resource/resource.h"

extern const struct BladeResourceEntry RESOURCE_INDEX_resource_resource[];
extern const unsigned RESOURCE_INDEX_resource_resource_len;

using std::string;

void Bar()
{
    Common();
    std::cout << "Bar" << "\n";
    for(unsigned i = 0; i < RESOURCE_INDEX_resource_resource_len; i++) {
        const struct BladeResourceEntry& obj = RESOURCE_INDEX_resource_resource[i];
        std::cout << "Loading config " << obj.name << "\n";
        std::cout << "Loading data " << string(obj.data, obj.size) << "\n";
    }
}
