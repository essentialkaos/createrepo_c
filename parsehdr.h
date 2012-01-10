#ifndef __PARSEHDR__
#define __PARSEHDR__

#include <rpm/rpmlib.h>
#include <glib.h>
#include "package.h"
#include "xml_dump.h"

Package *parse_header(Header hdr, gint64 mtime, gint64 size, const char *checksum, const char *checksum_type,
                      const char *location_href, const char *location_base,
                      int changelog_limit, gint64 hdr_start, gint64 hdr_end);
struct XmlStruct xml_from_header(Header hdr, gint64 mtime, gint64 size, const char *checksum, const char *checksum_type,
                      const char *location_href, const char *location_base,
                      int changelog_limit, gint64 hdr_start, gint64 hdr_end);

#endif /* __PARSEHDR__ */
