// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Admin Reports API (admin/reports_v1)
// Description:
//   Allows the administrators of Google Apps customers to fetch reports about
//   the usage, collaboration, security and risk for their users.
// Documentation:
//   https://developers.google.com/admin-sdk/reports/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View audit reports of Google Apps for your domain
 *
 *  Value "https://www.googleapis.com/auth/admin.reports.audit.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeReportsReportsAuditReadonly;
/**
 *  Authorization scope: View usage reports of Google Apps for your domain
 *
 *  Value "https://www.googleapis.com/auth/admin.reports.usage.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeReportsReportsUsageReadonly;

// ----------------------------------------------------------------------------
//   GTLRReportsService
//

/**
 *  Service for executing Admin Reports API queries.
 *
 *  Allows the administrators of Google Apps customers to fetch reports about
 *  the usage, collaboration, security and risk for their users.
 */
@interface GTLRReportsService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRReportsQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END
