#ifndef __MULTIPROTOCOL_H__
#define __MULTIPROTOCOL_H__
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

void multiprotocol_update(void);
void multiprotocol_test(void);

void multiprotocol_enable(void);
void multiprotocol_disable(void);
void multiprotocol_rebind(void);

enum e_Protocols
{
    kBayangProtocol    = 14
};

#if defined(__cplusplus)
}
#endif /* __cplusplus */
#endif  // #ifndef __MULTIPROTOCOL_H__
