#ifndef VIDEO_HANDLER_HPP
#define VIDEO_HANDLER_HPP

#include <gst/gst.h>
#include <string>
#include <cstdint>
#include <vector>

namespace video{
    class VideoHandler{
        std::vector<std::string> files;
        std::vector<std::string> concat_file;
    public:
        VideoHandler();
        void get_video(std::string path, time_t timestamp);
        int process_video(time_t timestamp, uint64_t duration); 
        void remove_video(int maintain_time, std::string path); //maintain_time를 넘겨받아야..
    };
}
#endif VIDEO_HANDLER_HPP