void __EntryFunction__()
{
	unk_0xBD9A2AF38E96A0ED();
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
	while (iVar0 < Global_97809)
	{
		if (Global_97809[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x9D40BBF80D8F5E8A() > Global_97809[iVar0 /*28*/].f_21 && Global_97809[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x911DB9BD97C951AF(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_97809[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0xB519E5386FBF69E5(Global_97809[iVar0 /*28*/].f_27, 0))
					{
						Global_97809[iVar0 /*28*/].f_21 = (Global_97809[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x3B75450B0AEE5786() * 1000f)));
						if (unk_0xDE923E56D89B9B0D(iVar1))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_97809[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_97809[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_97809[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x76B2D234F1895632(Global_97809[iVar0 /*28*/].f_23))
						{
							if (!unk_0xB519E5386FBF69E5(Global_97809[iVar0 /*28*/].f_27, 3))
							{
								unk_0x9E72F75033114968(iVar1, unk_0xBD306D8AFEF4E078(Global_97809[iVar0 /*28*/].f_23, Global_97809[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x66BC2361BBC0F6FA(iVar1, Global_97809[iVar0 /*28*/].f_23, Global_97809[iVar0 /*28*/].f_24, Global_97809[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_97809[iVar0 /*28*/].f_24 != 0f || Global_97809[iVar0 /*28*/].f_24.f_1 != 0f) || Global_97809[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0x9E72F75033114968(iVar1, Global_97809[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0xF284C175361D98D5(iVar1, Global_97809[iVar0 /*28*/].f_24, Global_97809[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x9D40BBF80D8F5E8A() - Global_97809[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_97809[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_97809[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_97809[iParam0 /*28*/].f_4), "", 64);
	Global_97809[iParam0 /*28*/].f_23 = 0;
	Global_97809[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_97809[iParam0 /*28*/].f_27 = 0;
	Global_97809[iParam0 /*28*/].f_20 = 0;
	Global_97809[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x04E7E853E31F41A3(&(Global_97809[iParam0 /*28*/]), "") && !unk_0x356491C12DAD1A37(&(Global_97809[iParam0 /*28*/])))
	{
		if (unk_0xB519E5386FBF69E5(Global_97809[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xB519E5386FBF69E5(Global_97809[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_97809[iParam0 /*28*/]), &(Global_97809[iParam0 /*28*/].f_4), Global_97809[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_97809[iParam0 /*28*/]), &(Global_97809[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xB519E5386FBF69E5(Global_97809[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_97809[iParam0 /*28*/]), Global_97809[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_97809[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0xAA8D087D7A86072A(uParam1);
	return unk_0x360D41DC76A83E6A((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0xAA8D087D7A86072A(uParam1);
	unk_0x8D23CF083336DA9B(uParam2);
	return unk_0x360D41DC76A83E6A((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0xAA8D087D7A86072A(uParam1);
	unk_0x9359E7CC54335EB9(uParam2);
	return unk_0x360D41DC76A83E6A((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xAA8D087D7A86072A(uParam1);
	unk_0x9359E7CC54335EB9(uParam2);
	unk_0x8D23CF083336DA9B(uParam3);
	return unk_0x360D41DC76A83E6A((1 + iParam0));
}

