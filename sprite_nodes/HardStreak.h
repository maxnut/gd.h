#ifndef __HARDSTREAK_H__
#define __HARDSTREAK_H__

#include <gd.h>

namespace gd {
    class GDH_DLL HardStreak : public cocos2d::CCDrawNode {
        public:
            float m_pulseSize;
            cocos2d::CCArray* m_pointsArr;
            cocos2d::CCPoint m_currentPoint;
            float m_waveSize;
            bool m_isSolid;
    }; // size = 0x134
}

#endif