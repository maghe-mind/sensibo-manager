#include "ExternalScheduling_DCPS.hpp"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__Mind_IrrigationScheduleItem__copyIn(
    c_base base,
    const class ::Mind::IrrigationScheduleItem *from,
    struct _Mind_IrrigationScheduleItem *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
        to->name = c_stringNew_s(base, from->name_.c_str());
        if(to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->name = c_stringNew_s(base, from->name_.c_str());
            if(to->name == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->dailyMask = c_stringNew_s(base, from->dailyMask_.c_str());
        if(to->dailyMask == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->dailyMask = c_stringNew_s(base, from->dailyMask_.c_str());
            if(to->dailyMask == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->timeStart = c_stringNew_s(base, from->timeStart_.c_str());
        if(to->timeStart == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->timeStart = c_stringNew_s(base, from->timeStart_.c_str());
            if(to->timeStart == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->timeEnd = c_stringNew_s(base, from->timeEnd_.c_str());
        if(to->timeEnd == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->timeEnd = c_stringNew_s(base, from->timeEnd_.c_str());
            if(to->timeEnd == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    {
/* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 826 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_ulong length0;
        c_string *dest0;
        const ::Mind::IrrigationScheduleItem::_pumps_seq *src = &from->pumps_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_string"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_string>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_ulong)(*src).size();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
         if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2080 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                    if(dest0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'Mind::IrrigationScheduleItem.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->pumps = (c_sequence)dest0;
         } else {
             result = V_COPYIN_RESULT_OUT_OF_MEMORY;
          }
#else
        dest0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
        if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2080 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                    if(dest0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'Mind::IrrigationScheduleItem.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->pumps = (c_sequence)dest0;
        } else {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#endif
    }
    return result;
}

v_copyin_result
__Mind_IrrigationSchedule__copyIn(
    c_base base,
    const class ::Mind::IrrigationSchedule *from,
    struct _Mind_IrrigationSchedule *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
        to->UUID = c_stringNew_s(base, from->UUID_.c_str());
        if(to->UUID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->UUID = c_stringNew_s(base, from->UUID_.c_str());
            if(to->UUID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->name = c_stringNew_s(base, from->name_.c_str());
        if(to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->name = c_stringNew_s(base, from->name_.c_str());
            if(to->name == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->monthlyMask = c_stringNew_s(base, from->monthlyMask_.c_str());
        if(to->monthlyMask == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->monthlyMask = c_stringNew_s(base, from->monthlyMask_.c_str());
            if(to->monthlyMask == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    to->automatic = (c_bool)from->automatic_;
    {
/* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 826 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_ulong length0;
        struct _Mind_IrrigationScheduleItem *dest0;
        const ::Mind::IrrigationSchedule::_scheduleItems_seq *src = &from->scheduleItems_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "Mind::IrrigationScheduleItem"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<Mind::IrrigationScheduleItem>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_ulong)(*src).size();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (struct _Mind_IrrigationScheduleItem *)c_newSequence_s(c_collectionType(type0),length0);
         if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2080 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
                extern v_copyin_result __Mind_IrrigationScheduleItem__copyIn(c_base base,
                    const Mind::IrrigationScheduleItem *From,
                    struct _Mind_IrrigationScheduleItem *To);

                result = __Mind_IrrigationScheduleItem__copyIn(base, &(*src)[i0], (struct _Mind_IrrigationScheduleItem *)&dest0[i0]);
            }
            to->scheduleItems = (c_sequence)dest0;
         } else {
             result = V_COPYIN_RESULT_OUT_OF_MEMORY;
          }
#else
        dest0 = (struct _Mind_IrrigationScheduleItem *)c_newSequence_s(c_collectionType(type0),length0);
        if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2080 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
                extern v_copyin_result __Mind_IrrigationScheduleItem__copyIn(c_base base,
                    const Mind::IrrigationScheduleItem *From,
                    struct _Mind_IrrigationScheduleItem *To);

                result = __Mind_IrrigationScheduleItem__copyIn(base, &(*src)[i0], (struct _Mind_IrrigationScheduleItem *)&dest0[i0]);
            }
            to->scheduleItems = (c_sequence)dest0;
        } else {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#endif
    }
    return result;
}

v_copyin_result
__Mind_ExternalLightsSchedule__copyIn(
    c_base base,
    const class ::Mind::ExternalLightsSchedule *from,
    struct _Mind_ExternalLightsSchedule *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
        to->UUID = c_stringNew_s(base, from->UUID_.c_str());
        if(to->UUID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->UUID = c_stringNew_s(base, from->UUID_.c_str());
            if(to->UUID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->name = c_stringNew_s(base, from->name_.c_str());
        if(to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->name = c_stringNew_s(base, from->name_.c_str());
            if(to->name == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->timeStart = c_stringNew_s(base, from->timeStart_.c_str());
        if(to->timeStart == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->timeStart = c_stringNew_s(base, from->timeStart_.c_str());
            if(to->timeStart == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->timeEnd = c_stringNew_s(base, from->timeEnd_.c_str());
        if(to->timeEnd == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->timeEnd = c_stringNew_s(base, from->timeEnd_.c_str());
            if(to->timeEnd == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    to->automatic = (c_bool)from->automatic_;
    {
/* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 826 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_ulong length0;
        c_string *dest0;
        const ::Mind::ExternalLightsSchedule::_diffLights_seq *src = &from->diffLights_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_string"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_string>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_ulong)(*src).size();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
         if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2080 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                    if(dest0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'Mind::ExternalLightsSchedule.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->diffLights = (c_sequence)dest0;
         } else {
             result = V_COPYIN_RESULT_OUT_OF_MEMORY;
          }
#else
        dest0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
        if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2080 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                    if(dest0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'Mind::ExternalLightsSchedule.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->diffLights = (c_sequence)dest0;
        } else {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#endif
    }
    return result;
}

void
__Mind_IrrigationScheduleItem__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_IrrigationScheduleItem *from = (const struct _Mind_IrrigationScheduleItem *)_from;
    class ::Mind::IrrigationScheduleItem *to = (class ::Mind::IrrigationScheduleItem *)_to;
    to->name(from->name ? from->name : "");
    to->dailyMask(from->dailyMask ? from->dailyMask : "");
    to->timeStart(from->timeStart ? from->timeStart : "");
    to->timeEnd(from->timeEnd ? from->timeEnd : "");
    {
        long size0;
        const c_string *src0 = (const c_string *)from->pumps;
        std::vector< std::string > *dst = &to->pumps();

        size0 = c_arraySize(c_sequence(from->pumps));
        to->pumps().clear();
        to->pumps().reserve(size0);
        {
            long i0;
            for (i0 = 0; i0 < size0; i0++) {
                (*dst).push_back(src0[i0] ? src0[i0] : "");
            }
        }
    }
}

void
__Mind_IrrigationSchedule__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_IrrigationSchedule *from = (const struct _Mind_IrrigationSchedule *)_from;
    class ::Mind::IrrigationSchedule *to = (class ::Mind::IrrigationSchedule *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->name(from->name ? from->name : "");
    to->monthlyMask(from->monthlyMask ? from->monthlyMask : "");
    to->automatic((bool)from->automatic);
    {
        long size0;
        const struct _Mind_IrrigationScheduleItem *src0 = (const struct _Mind_IrrigationScheduleItem *)from->scheduleItems;
        std::vector< ::Mind::IrrigationScheduleItem > *dst = &to->scheduleItems();

        size0 = c_arraySize(c_sequence(from->scheduleItems));
        to->scheduleItems().resize(size0);
        {
            long i0;
            for (i0 = 0; i0 < size0; i0++) {
        extern void __Mind_IrrigationScheduleItem__copyOut(const void *from, void *to);
                __Mind_IrrigationScheduleItem__copyOut((const void *)&src0[i0], (void *)&(*dst)[i0]);
            }
        }
    }
}

void
__Mind_ExternalLightsSchedule__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_ExternalLightsSchedule *from = (const struct _Mind_ExternalLightsSchedule *)_from;
    class ::Mind::ExternalLightsSchedule *to = (class ::Mind::ExternalLightsSchedule *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->name(from->name ? from->name : "");
    to->timeStart(from->timeStart ? from->timeStart : "");
    to->timeEnd(from->timeEnd ? from->timeEnd : "");
    to->automatic((bool)from->automatic);
    {
        long size0;
        const c_string *src0 = (const c_string *)from->diffLights;
        std::vector< std::string > *dst = &to->diffLights();

        size0 = c_arraySize(c_sequence(from->diffLights));
        to->diffLights().clear();
        to->diffLights().reserve(size0);
        {
            long i0;
            for (i0 = 0; i0 < size0; i0++) {
                (*dst).push_back(src0[i0] ? src0[i0] : "");
            }
        }
    }
}

