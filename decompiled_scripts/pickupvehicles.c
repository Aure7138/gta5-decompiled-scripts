#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	func_4(21);
	if (unk_0x524AF15206846700(18))
	{
		if (unk_0x998ABBAD6623E9BD() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD32535FA4397160F(joaat("docks_setup")) == 0)
		{
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					iLocal_28 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0xD2CFFE76B625AE55(iLocal_28))
			{
				if (unk_0x0B4DDB992C7BCF57(iLocal_28, 0))
				{
					if (unk_0x753C14DD45ABE554(iLocal_28, joaat("handler")))
					{
						unk_0xDF3F6D6CDD523546(0, 51);
						if (!unk_0x593073D672DC0947(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0xD2CFFE76B625AE55(iLocal_29) || (unk_0xD2CFFE76B625AE55(iLocal_29) && unk_0xE3250749A1141EC2(unk_0xA8CFDE65C45F813B(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0xE3250749A1141EC2(unk_0xA8CFDE65C45F813B(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0xD2CFFE76B625AE55(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (unk_0xE1F0495E9F9480AC(iLocal_28, iLocal_29))
										{
											if (unk_0x117D586920E8F7BA(0, 51))
											{
												unk_0x140A8A62940C1822(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								uLocal_30 = unk_0xA0F74982C6AAA9D4();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x117D586920E8F7BA(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA0F74982C6AAA9D4();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x7C3AA2D27E16E2AD();
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xF426A5DE932B3BEE(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xF426A5DE932B3BEE(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x26545538B51562AD(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
	return 1;
}

