/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/load_stats/v2/lrs.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/service/load_stats/v2/lrs.upb.h"
#else
  #include  "envoy/service/load_stats/v2/lrs.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/api/v2/core/base.upb.h"
#else
  #include  "envoy/api/v2/core/base.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/api/v2/endpoint/load_report.upb.h"
#else
  #include  "envoy/api/v2/endpoint/load_report.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/duration.upb.h"
#else
  #include  "google/protobuf/duration.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/validate/validate.upb.h"
#else
  #include  "validate/validate.upb.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

static const upb_msglayout *const envoy_service_load_stats_v2_LoadStatsRequest_submsgs[2] = {
  &envoy_api_v2_core_Node_msginit,
  &envoy_api_v2_endpoint_ClusterStats_msginit,
};

static const upb_msglayout_field envoy_service_load_stats_v2_LoadStatsRequest__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
  {2, UPB_SIZE(4, 8), 0, 1, 11, 3},
};

const upb_msglayout envoy_service_load_stats_v2_LoadStatsRequest_msginit = {
  &envoy_service_load_stats_v2_LoadStatsRequest_submsgs[0],
  &envoy_service_load_stats_v2_LoadStatsRequest__fields[0],
  UPB_SIZE(8, 16), 2, false,
};

static const upb_msglayout *const envoy_service_load_stats_v2_LoadStatsResponse_submsgs[1] = {
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field envoy_service_load_stats_v2_LoadStatsResponse__fields[3] = {
  {1, UPB_SIZE(8, 16), 0, 0, 9, 3},
  {2, UPB_SIZE(4, 8), 0, 0, 11, 1},
  {3, UPB_SIZE(0, 0), 0, 0, 8, 1},
};

const upb_msglayout envoy_service_load_stats_v2_LoadStatsResponse_msginit = {
  &envoy_service_load_stats_v2_LoadStatsResponse_submsgs[0],
  &envoy_service_load_stats_v2_LoadStatsResponse__fields[0],
  UPB_SIZE(12, 24), 3, false,
};

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

