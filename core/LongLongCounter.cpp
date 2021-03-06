#include "LongLongCounter.h"

LongCounter::LongCounter() : LongHash<int>()
   {
   SetAllowDuplicateKeys(false);
   }

void LongCounter::IncrementCount(long long key)
   {
   int slot = Find(key);

   if (slot == LH_NOTFOUND)
      Add(key, 1);
   else if (Object(slot) == -1)
      Delete(slot);
   else
      Object(slot)++;
   }

void LongCounter::DecrementCount(long long key)
   {
   int slot = Find(key);

   if (slot == LH_NOTFOUND)
      Add(key, -1);
   else if (Object(slot) == 1)
      Delete(slot);
   else
      Object(slot)--;
   }

int LongCounter::GetCount(long long key)
   {
   int slot = Find(key);

   if (slot == LH_NOTFOUND)
      return 0;
   else
      return Object(slot)--;
   }

   
