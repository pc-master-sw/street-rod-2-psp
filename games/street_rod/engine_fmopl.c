/* DOSBox PSP YM3812 adapter. The included component retains its GPL notices. */
#include "engine_adapter.h"

typedef uint8_t Bit8u;
typedef int16_t Bit16s;
typedef unsigned int uint;
#include "fmopl.c"

static FM_OPL *opl;

bool sr_opl_open(int sample_rate)
{
    opl = OPLCreate(OPL_TYPE_YM3812, 3579545, sample_rate);
    return opl != NULL;
}

void sr_opl_close(void)
{
    if (opl) {
        OPLDestroy(opl);
        opl = NULL;
    }
}

void sr_opl_write(uint8_t reg, uint8_t value)
{
    OPLWriteReg(opl, reg, value);
}

int16_t sr_opl_sample(void)
{
    int16_t sample;
    YM3812UpdateOne(opl, &sample, 1);
    return sample;
}
