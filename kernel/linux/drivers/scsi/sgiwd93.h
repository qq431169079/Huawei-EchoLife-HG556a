/* $Id: sgiwd93.h,v 1.1 2008/08/26 03:55:46 l65130 Exp $
 * sgiwd93.h: SGI WD93 scsi definitions.
 *
 * Copyright (C) 1996 David S. Miller (dm@engr.sgi.com)
 */
#ifndef _SGIWD93_H
#define _SGIWD93_H

#ifndef CMD_PER_LUN
#define CMD_PER_LUN 8
#endif

#ifndef CAN_QUEUE
#define CAN_QUEUE   16
#endif

int sgiwd93_detect(Scsi_Host_Template *);
int sgiwd93_release(struct Scsi_Host *instance);
const char *wd33c93_info(void);
int wd33c93_queuecommand(Scsi_Cmnd *, void (*done)(Scsi_Cmnd *));
int wd33c93_abort(Scsi_Cmnd *);
int wd33c93_host_reset(Scsi_Cmnd * SCpnt);

#endif /* !(_SGIWD93_H) */