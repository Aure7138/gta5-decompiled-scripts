void __EntryFunction__()
{
	unk_0x1ED2FDBD02899869();
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
	while (iVar0 < Global_96013)
	{
		if (Global_96013[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x17103F66FBB44C3C() > Global_96013[iVar0 /*28*/].f_21 && Global_96013[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0xC15351F18B67BEDB(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_96013[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0x94E72F17611BCD3C(Global_96013[iVar0 /*28*/].f_27, 0))
					{
						Global_96013[iVar0 /*28*/].f_21 = (Global_96013[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0xD1D592A06EBAAE4F() * 1000f)));
						if (unk_0xEA8D479DE161A0B5(iVar1))
						{
							unk_0xEDB9A377CD8B7F03(&(Global_96013[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_96013[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_96013[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x0BA451447C3B1A8D(Global_96013[iVar0 /*28*/].f_23))
						{
							if (!unk_0x94E72F17611BCD3C(Global_96013[iVar0 /*28*/].f_27, 3))
							{
								unk_0xD8390E756DBA7DB3(iVar1, unk_0x20CBCBD58A2C73B4(Global_96013[iVar0 /*28*/].f_23, Global_96013[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0xC043654AB57921C7(iVar1, Global_96013[iVar0 /*28*/].f_23, Global_96013[iVar0 /*28*/].f_24, Global_96013[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_96013[iVar0 /*28*/].f_24 != 0f || Global_96013[iVar0 /*28*/].f_24.f_1 != 0f) || Global_96013[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xD8390E756DBA7DB3(iVar1, Global_96013[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x807ACCF6E346131B(iVar1, Global_96013[iVar0 /*28*/].f_24, Global_96013[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x17103F66FBB44C3C() - Global_96013[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_96013[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_96013[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_96013[iParam0 /*28*/].f_4), "", 64);
	Global_96013[iParam0 /*28*/].f_23 = 0;
	Global_96013[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_96013[iParam0 /*28*/].f_27 = 0;
	Global_96013[iParam0 /*28*/].f_20 = 0;
	Global_96013[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x6B08EC9A88700FBB(&(Global_96013[iParam0 /*28*/]), "") && !unk_0x471A7F8C908126F0(&(Global_96013[iParam0 /*28*/])))
	{
		if (unk_0x94E72F17611BCD3C(Global_96013[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0x94E72F17611BCD3C(Global_96013[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_96013[iParam0 /*28*/]), &(Global_96013[iParam0 /*28*/].f_4), Global_96013[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_96013[iParam0 /*28*/]), &(Global_96013[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0x94E72F17611BCD3C(Global_96013[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_96013[iParam0 /*28*/]), Global_96013[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_96013[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0x1935773249F749A2(uParam1);
	return unk_0x7796B4D54E5DF47E((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0x1935773249F749A2(uParam1);
	unk_0x25585F3578FE81FC(uParam2);
	return unk_0x7796B4D54E5DF47E((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0x1935773249F749A2(uParam1);
	unk_0xDB4BC767CEF09274(uParam2);
	return unk_0x7796B4D54E5DF47E((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0x1935773249F749A2(uParam1);
	unk_0xDB4BC767CEF09274(uParam2);
	unk_0x25585F3578FE81FC(uParam3);
	return unk_0x7796B4D54E5DF47E((1 + iParam0));
}

