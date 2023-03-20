void __EntryFunction__()
{
	unk_0x6516E26C513581FA();
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
	while (iVar0 < Global_99840)
	{
		if (Global_99840[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x1ADBAAC322D61F73() > Global_99840[iVar0 /*28*/].f_21 && Global_99840[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0xCE816A9B77723E81(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_99840[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0x7DA173D4FD42F36B(Global_99840[iVar0 /*28*/].f_27, 0))
					{
						Global_99840[iVar0 /*28*/].f_21 = (Global_99840[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x487AF170F52A57F1() * 1000f)));
						if (unk_0x310E15C9A3BC153A(iVar1))
						{
							unk_0xE27C8E42A97895CF(&(Global_99840[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_99840[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_99840[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0xBDA1F5E8A36BFA07(Global_99840[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0x7DA173D4FD42F36B(Global_99840[iVar0 /*28*/].f_27, 3))
							{
								unk_0xB89355400721D780(iVar1, unk_0xF42E2289B33D5C38(Global_99840[iVar0 /*28*/].f_23, Global_99840[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x61BD549FF8BAFC34(iVar1, Global_99840[iVar0 /*28*/].f_23, Global_99840[iVar0 /*28*/].f_24, Global_99840[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_99840[iVar0 /*28*/].f_24 != 0f || Global_99840[iVar0 /*28*/].f_24.f_1 != 0f) || Global_99840[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xB89355400721D780(iVar1, Global_99840[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x5B612CD948ED2327(iVar1, Global_99840[iVar0 /*28*/].f_24, Global_99840[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x1ADBAAC322D61F73() - Global_99840[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_99840[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_99840[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_99840[iParam0 /*28*/].f_4), "", 64);
	Global_99840[iParam0 /*28*/].f_23 = 0;
	Global_99840[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_99840[iParam0 /*28*/].f_27 = 0;
	Global_99840[iParam0 /*28*/].f_20 = 0;
	Global_99840[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x2F6869889D97DFED(&(Global_99840[iParam0 /*28*/]), "") && !unk_0x60D87DA27F70EBBC(&(Global_99840[iParam0 /*28*/])))
	{
		if (unk_0x7DA173D4FD42F36B(Global_99840[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0x7DA173D4FD42F36B(Global_99840[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_99840[iParam0 /*28*/]), &(Global_99840[iParam0 /*28*/].f_4), Global_99840[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_99840[iParam0 /*28*/]), &(Global_99840[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0x7DA173D4FD42F36B(Global_99840[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_99840[iParam0 /*28*/]), Global_99840[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_99840[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0xC11856C04AAC5813(uParam1);
	return unk_0xBA2B1F42B35E6698((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0xC11856C04AAC5813(uParam1);
	unk_0xD92C45283BCDA624(uParam2);
	return unk_0xBA2B1F42B35E6698((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0xC11856C04AAC5813(uParam1);
	unk_0x4C5D86B5B659C953(uParam2);
	return unk_0xBA2B1F42B35E6698((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xC11856C04AAC5813(uParam1);
	unk_0x4C5D86B5B659C953(uParam2);
	unk_0xD92C45283BCDA624(uParam3);
	return unk_0xBA2B1F42B35E6698((1 + iParam0));
}

