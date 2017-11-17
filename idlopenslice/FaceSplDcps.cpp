#include "Face_DCPS.hpp"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__Mind_Face__copyIn(
    c_base base,
    const class ::Mind::Face *from,
    struct _Mind_Face *to)
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
        to->appearanceUUID = c_stringNew_s(base, from->appearanceUUID_.c_str());
        if(to->appearanceUUID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->appearanceUUID = c_stringNew_s(base, from->appearanceUUID_.c_str());
            if(to->appearanceUUID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->oldClusterUUID = c_stringNew_s(base, from->oldClusterUUID_.c_str());
        if(to->oldClusterUUID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->oldClusterUUID = c_stringNew_s(base, from->oldClusterUUID_.c_str());
            if(to->oldClusterUUID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->clusterUUID = c_stringNew_s(base, from->clusterUUID_.c_str());
        if(to->clusterUUID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->clusterUUID = c_stringNew_s(base, from->clusterUUID_.c_str());
            if(to->clusterUUID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    {
/* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 826 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_ulong length0;
        c_octet *dest0;
        const ::Mind::Face::_featureData_seq *src = &from->featureData_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_octet"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_octet>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_ulong)(*src).size();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_octet *)c_newSequence_s(c_collectionType(type0),length0);
         if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2025 */
            if(length0 > 0)
            {
                const c_octet *buf0;
                buf0 = reinterpret_cast<const c_octet *>(&((*src)[0]));
                memcpy (dest0,buf0,length0* sizeof(*dest0));
            }
            to->featureData = (c_sequence)dest0;
         } else {
             result = V_COPYIN_RESULT_OUT_OF_MEMORY;
          }
#else
        dest0 = (c_octet *)c_newSequence_s(c_collectionType(type0),length0);
        if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2025 */
            if(length0 > 0)
            {
                const c_octet *buf0;
                buf0 = reinterpret_cast<const c_octet *>(&((*src)[0]));
                memcpy (dest0,buf0,length0* sizeof(*dest0));
            }
            to->featureData = (c_sequence)dest0;
        } else {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#endif
    }
    {
/* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 826 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_ulong length0;
        c_octet *dest0;
        const ::Mind::Face::_imageData_seq *src = &from->imageData_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_octet"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_octet>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_ulong)(*src).size();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_octet *)c_newSequence_s(c_collectionType(type0),length0);
         if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2025 */
            if(length0 > 0)
            {
                const c_octet *buf0;
                buf0 = reinterpret_cast<const c_octet *>(&((*src)[0]));
                memcpy (dest0,buf0,length0* sizeof(*dest0));
            }
            to->imageData = (c_sequence)dest0;
         } else {
             result = V_COPYIN_RESULT_OUT_OF_MEMORY;
          }
#else
        dest0 = (c_octet *)c_newSequence_s(c_collectionType(type0),length0);
        if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2025 */
            if(length0 > 0)
            {
                const c_octet *buf0;
                buf0 = reinterpret_cast<const c_octet *>(&((*src)[0]));
                memcpy (dest0,buf0,length0* sizeof(*dest0));
            }
            to->imageData = (c_sequence)dest0;
        } else {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#endif
    }
    to->timestamp = (c_long)from->timestamp_;
    to->label = (c_long)from->label_;
    to->isMedoid = (c_bool)from->isMedoid_;
#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->endType_) >= 0) && (((c_long)from->endType_) < 3) ){
        to->endType = (enum _Mind_FaceDummyEndType)from->endType_;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'Mind::Face.endType' of type 'FaceDummyEndType' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->endType = (enum _Mind_FaceDummyEndType)from->endType_;
#endif
    return result;
}

void
__Mind_Face__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_Face *from = (const struct _Mind_Face *)_from;
    class ::Mind::Face *to = (class ::Mind::Face *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->appearanceUUID(from->appearanceUUID ? from->appearanceUUID : "");
    to->oldClusterUUID(from->oldClusterUUID ? from->oldClusterUUID : "");
    to->clusterUUID(from->clusterUUID ? from->clusterUUID : "");
    {
        long size0;
        const c_octet *src0 = (const c_octet *)from->featureData;
        std::vector< uint8_t > *dst = &to->featureData();

        size0 = c_arraySize(c_sequence(from->featureData));
        to->featureData().clear();
        to->featureData().reserve(size0);
            (*dst).assign(src0, src0 + size0);
    }
    {
        long size0;
        const c_octet *src0 = (const c_octet *)from->imageData;
        std::vector< uint8_t > *dst = &to->imageData();

        size0 = c_arraySize(c_sequence(from->imageData));
        to->imageData().clear();
        to->imageData().reserve(size0);
            (*dst).assign(src0, src0 + size0);
    }
    to->timestamp((int32_t)from->timestamp);
    to->label((int32_t)from->label);
    to->isMedoid((bool)from->isMedoid);
    to->endType((::Mind::FaceDummyEndType)from->endType);
}
