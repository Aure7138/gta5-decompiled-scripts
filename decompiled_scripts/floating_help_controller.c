void __EntryFunction__()
{
	unk_0xE3074BC832716971();
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
	while (iVar0 < Global_100306)
	{
		if (Global_100306[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x84A97C70FFDEC0C8() > Global_100306[iVar0 /*28*/].f_21 && Global_100306[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x1215D85927FBB3DB(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_100306[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0xF44A5E894FE76438(Global_100306[iVar0 /*28*/].f_27, 0))
					{
						Global_100306[iVar0 /*28*/].f_21 = (Global_100306[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x758A470BA92498EA() * 1000f)));
						if (unk_0xED760E383AB5460A(iVar1))
						{
							unk_0xB8A73E7DA87B2968(&(Global_100306[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_100306[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_100306[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0xB529B2A4B7C64D6D(Global_100306[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0xF44A5E894FE76438(Global_100306[iVar0 /*28*/].f_27, 3))
							{
								unk_0x421A2D64EE97C5DD(iVar1, unk_0x7E140C583F91AE2B(Global_100306[iVar0 /*28*/].f_23, Global_100306[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x50AC4058F3E218C9(iVar1, Global_100306[iVar0 /*28*/].f_23, Global_100306[iVar0 /*28*/].f_24, Global_100306[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_100306[iVar0 /*28*/].f_24 != 0f || Global_100306[iVar0 /*28*/].f_24.f_1 != 0f) || Global_100306[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0x421A2D64EE97C5DD(iVar1, Global_100306[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0xDC5A5B33DA688E3C(iVar1, Global_100306[iVar0 /*28*/].f_24, Global_100306[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x84A97C70FFDEC0C8() - Global_100306[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_100306[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_100306[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_100306[iParam0 /*28*/].f_4), "", 64);
	Global_100306[iParam0 /*28*/].f_23 = 0;
	Global_100306[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_100306[iParam0 /*28*/].f_27 = 0;
	Global_100306[iParam0 /*28*/].f_20 = 0;
	Global_100306[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0xCC257DA11A122B5F(&(Global_100306[iParam0 /*28*/]), "") && !unk_0x1C079483C9D16F36(&(Global_100306[iParam0 /*28*/])))
	{
		if (unk_0xF44A5E894FE76438(Global_100306[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xF44A5E894FE76438(Global_100306[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_100306[iParam0 /*28*/]), &(Global_100306[iParam0 /*28*/].f_4), Global_100306[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_100306[iParam0 /*28*/]), &(Global_100306[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xF44A5E894FE76438(Global_100306[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_100306[iParam0 /*28*/]), Global_100306[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_100306[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0xB57C4257E4B22B1A(uParam1);
	return unk_0x39EEBD00DF395566((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0xB57C4257E4B22B1A(uParam1);
	unk_0xF99222307D7150A9(uParam2);
	return unk_0x39EEBD00DF395566((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0xB57C4257E4B22B1A(uParam1);
	unk_0xB1953EBEF4D6BD85(uParam2);
	return unk_0x39EEBD00DF395566((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xB57C4257E4B22B1A(uParam1);
	unk_0xB1953EBEF4D6BD85(uParam2);
	unk_0xF99222307D7150A9(uParam3);
	return unk_0x39EEBD00DF395566((1 + iParam0));
}

