import std;
import vulkan_hpp;

int main() {
    std::unordered_set<vk::Queue> queues; // unordered_set<T> instantiates std::hash<T>.
}