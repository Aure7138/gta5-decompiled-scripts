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
	if (unk_0x78BF2001491914AC(18))
	{
		if (unk_0xC184DF5B357D4F9C() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x09952BA662A7629B(joaat("docks_setup")) == 0)
		{
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					iLocal_28 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0x2137828D03306CAF(iLocal_28))
			{
				if (unk_0x7FAC45D56235AB39(iLocal_28, 0))
				{
					if (unk_0xEB018752B4AE9E13(iLocal_28, joaat("handler")))
					{
						unk_0x712F381D6DC979A0(0, 51);
						if (!unk_0x4CF6ACB0282320A6(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x2137828D03306CAF(iLocal_29) || (unk_0x2137828D03306CAF(iLocal_29) && unk_0x96FF6B9A3E05D35F(unk_0xD1EE0E9FCD74A37B(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0x96FF6B9A3E05D35F(unk_0xD1EE0E9FCD74A37B(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0x2137828D03306CAF(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (unk_0x4D4C1B3AA9AFE430(iLocal_28, iLocal_29))
										{
											if (unk_0x92BC4A8239BDDACC(0, 51))
											{
												unk_0xB6F00013C5112BEF(iLocal_28, iLocal_29);
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
								uLocal_30 = unk_0x3732B96D7A1859B4();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x92BC4A8239BDDACC(0, 51))
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
	
	iVar0 = unk_0x3732B96D7A1859B4();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xA232817B0B36F2E5();
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
	if (unk_0xAA4F14DA15DB0B51(Global_103236.f_8866.f_99.f_219[iVar0], iVar1))
	{
		unk_0x507FE690B1271947(&(Global_103236.f_8866.f_99.f_219[iVar0]), iVar1);
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
	if (unk_0xAA4F14DA15DB0B51(Global_103236.f_8866.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF6082E2ADA1C795B(&(Global_103236.f_8866.f_99.f_219[iVar0]), iVar1);
	return 1;
}

