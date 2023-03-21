void __EntryFunction__()
{
	unk_0x945226432ACF160F();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101890)
	{
		if (Global_101890[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x3732B96D7A1859B4() > Global_101890[iVar0 /*28*/].f_21 && Global_101890[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0xCE563FE94BCF6479(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_101890[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0xAA4F14DA15DB0B51(Global_101890[iVar0 /*28*/].f_27, 0))
					{
						Global_101890[iVar0 /*28*/].f_21 = (Global_101890[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0xBCA469D44FBFAC80() * 1000f)));
						if (unk_0x1CB854B7D51F38C0(iVar1))
						{
							unk_0xF6082E2ADA1C795B(&(Global_101890[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_101890[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_101890[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0xA9A04898798AE9E6(Global_101890[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0xAA4F14DA15DB0B51(Global_101890[iVar0 /*28*/].f_27, 3))
							{
								unk_0xF582F2ECF5A29584(iVar1, unk_0x82D9CF397BA8C885(Global_101890[iVar0 /*28*/].f_23, Global_101890[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x9AC9B52901BB0C00(iVar1, Global_101890[iVar0 /*28*/].f_23, Global_101890[iVar0 /*28*/].f_24, Global_101890[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_101890[iVar0 /*28*/].f_24 != 0f || Global_101890[iVar0 /*28*/].f_24.f_1 != 0f) || Global_101890[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xF582F2ECF5A29584(iVar1, Global_101890[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x63778DEF6E530C6E(iVar1, Global_101890[iVar0 /*28*/].f_24, Global_101890[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x3732B96D7A1859B4() - Global_101890[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_101890[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_101890[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_101890[iParam0 /*28*/].f_4), "", 64);
	Global_101890[iParam0 /*28*/].f_23 = 0;
	Global_101890[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_101890[iParam0 /*28*/].f_27 = 0;
	Global_101890[iParam0 /*28*/].f_20 = 0;
	Global_101890[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x35302CD5A5D37EED(&(Global_101890[iParam0 /*28*/]), "") && !unk_0x47988E04F8E2F0AD(&(Global_101890[iParam0 /*28*/])))
	{
		if (unk_0xAA4F14DA15DB0B51(Global_101890[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xAA4F14DA15DB0B51(Global_101890[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_101890[iParam0 /*28*/]), &(Global_101890[iParam0 /*28*/].f_4), Global_101890[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_101890[iParam0 /*28*/]), &(Global_101890[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Global_101890[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_101890[iParam0 /*28*/]), Global_101890[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_101890[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0xCC4D66D4B9222F95(uParam1);
	return unk_0x95886DF60C19E1CC((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0xCC4D66D4B9222F95(uParam1);
	unk_0xEA97619D8B89D387(uParam2);
	return unk_0x95886DF60C19E1CC((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0xCC4D66D4B9222F95(uParam1);
	unk_0xD5DA3EC5EEC78358(uParam2);
	return unk_0x95886DF60C19E1CC((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xCC4D66D4B9222F95(uParam1);
	unk_0xD5DA3EC5EEC78358(uParam2);
	unk_0xEA97619D8B89D387(uParam3);
	return unk_0x95886DF60C19E1CC((1 + iParam0));
}

