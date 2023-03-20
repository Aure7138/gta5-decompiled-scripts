void __EntryFunction__()
{
	unk_0x84027ACC1E53BA5C();
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
	while (iVar0 < Global_99630)
	{
		if (Global_99630[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x693EBB4F13506457() > Global_99630[iVar0 /*28*/].f_21 && Global_99630[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x31E622495A0F2BE6(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_99630[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0xDCC86F723E82125E(Global_99630[iVar0 /*28*/].f_27, 0))
					{
						Global_99630[iVar0 /*28*/].f_21 = (Global_99630[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x6CE7EDC8B5C46819() * 1000f)));
						if (unk_0x05F012B23FC7FF64(iVar1))
						{
							unk_0x59A0729D503ED758(&(Global_99630[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_99630[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_99630[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0xB6900B8CB0ABBD2B(Global_99630[iVar0 /*28*/].f_23))
						{
							if (!unk_0xDCC86F723E82125E(Global_99630[iVar0 /*28*/].f_27, 3))
							{
								unk_0xA652CD8F4F098D74(iVar1, unk_0xCC31DB73C65552D8(Global_99630[iVar0 /*28*/].f_23, Global_99630[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x96C267CD3AA9067F(iVar1, Global_99630[iVar0 /*28*/].f_23, Global_99630[iVar0 /*28*/].f_24, Global_99630[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_99630[iVar0 /*28*/].f_24 != 0f || Global_99630[iVar0 /*28*/].f_24.f_1 != 0f) || Global_99630[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xA652CD8F4F098D74(iVar1, Global_99630[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x3EB17936C2178AAB(iVar1, Global_99630[iVar0 /*28*/].f_24, Global_99630[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x693EBB4F13506457() - Global_99630[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_99630[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_99630[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_99630[iParam0 /*28*/].f_4), "", 64);
	Global_99630[iParam0 /*28*/].f_23 = 0;
	Global_99630[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_99630[iParam0 /*28*/].f_27 = 0;
	Global_99630[iParam0 /*28*/].f_20 = 0;
	Global_99630[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0xF8D041B05C3D1FD4(&(Global_99630[iParam0 /*28*/]), "") && !unk_0x544AEDB4A15228FF(&(Global_99630[iParam0 /*28*/])))
	{
		if (unk_0xDCC86F723E82125E(Global_99630[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xDCC86F723E82125E(Global_99630[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_99630[iParam0 /*28*/]), &(Global_99630[iParam0 /*28*/].f_4), Global_99630[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_99630[iParam0 /*28*/]), &(Global_99630[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xDCC86F723E82125E(Global_99630[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_99630[iParam0 /*28*/]), Global_99630[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_99630[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0xD90D7D16FDE685B6(uParam1);
	return unk_0x699790DC9A5E5D9A((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0xD90D7D16FDE685B6(uParam1);
	unk_0x6DC80A902A91958F(uParam2);
	return unk_0x699790DC9A5E5D9A((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0xD90D7D16FDE685B6(uParam1);
	unk_0xCE59E3E42586D52D(uParam2);
	return unk_0x699790DC9A5E5D9A((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xD90D7D16FDE685B6(uParam1);
	unk_0xCE59E3E42586D52D(uParam2);
	unk_0x6DC80A902A91958F(uParam3);
	return unk_0x699790DC9A5E5D9A((1 + iParam0));
}

