void __EntryFunction__()
{
	unk_0xB64A6F2B8046CEF8();
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
	while (iVar0 < Global_100207)
	{
		if (Global_100207[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0xDF658EB6CA91DFBC() > Global_100207[iVar0 /*28*/].f_21 && Global_100207[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x436DCF1E1ED3DA7A(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_100207[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0x08BA6DD398CA197C(Global_100207[iVar0 /*28*/].f_27, 0))
					{
						Global_100207[iVar0 /*28*/].f_21 = (Global_100207[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x62E2FDDFDA7A731D() * 1000f)));
						if (unk_0xB8062C3C4BE95491(iVar1))
						{
							unk_0x88B0F0DC270164B7(&(Global_100207[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_100207[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_100207[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x912AD5A10E7633F0(Global_100207[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0x08BA6DD398CA197C(Global_100207[iVar0 /*28*/].f_27, 3))
							{
								unk_0xE75E0143B8F86984(iVar1, unk_0x2E01486DB8218E16(Global_100207[iVar0 /*28*/].f_23, Global_100207[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0xC7FB1E85898BCB70(iVar1, Global_100207[iVar0 /*28*/].f_23, Global_100207[iVar0 /*28*/].f_24, Global_100207[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_100207[iVar0 /*28*/].f_24 != 0f || Global_100207[iVar0 /*28*/].f_24.f_1 != 0f) || Global_100207[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xE75E0143B8F86984(iVar1, Global_100207[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x511916C3D4C9050D(iVar1, Global_100207[iVar0 /*28*/].f_24, Global_100207[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0xDF658EB6CA91DFBC() - Global_100207[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_100207[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_100207[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_100207[iParam0 /*28*/].f_4), "", 64);
	Global_100207[iParam0 /*28*/].f_23 = 0;
	Global_100207[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_100207[iParam0 /*28*/].f_27 = 0;
	Global_100207[iParam0 /*28*/].f_20 = 0;
	Global_100207[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x28C1B9853548BD8E(&(Global_100207[iParam0 /*28*/]), "") && !unk_0xD28EDDD3F7264249(&(Global_100207[iParam0 /*28*/])))
	{
		if (unk_0x08BA6DD398CA197C(Global_100207[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0x08BA6DD398CA197C(Global_100207[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_100207[iParam0 /*28*/]), &(Global_100207[iParam0 /*28*/].f_4), Global_100207[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_100207[iParam0 /*28*/]), &(Global_100207[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0x08BA6DD398CA197C(Global_100207[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_100207[iParam0 /*28*/]), Global_100207[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_100207[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0xA277242E6FB38513(uParam1);
	return unk_0x52387FFD63E8D8FC((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0xA277242E6FB38513(uParam1);
	unk_0x3F9D1B882EC0B8AF(uParam2);
	return unk_0x52387FFD63E8D8FC((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0xA277242E6FB38513(uParam1);
	unk_0xBDE6EEC5F6BDC060(uParam2);
	return unk_0x52387FFD63E8D8FC((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xA277242E6FB38513(uParam1);
	unk_0xBDE6EEC5F6BDC060(uParam2);
	unk_0x3F9D1B882EC0B8AF(uParam3);
	return unk_0x52387FFD63E8D8FC((1 + iParam0));
}

