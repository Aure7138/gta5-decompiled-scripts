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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uVar0 = func_13();
	if (unk_0x8D841F1DD3FA555F(3))
	{
		unk_0xC23A229F78DAD92A();
	}
	while (true)
	{
		if (unk_0xCC8E3BAC62A29F42(uVar0))
		{
			switch (iLocal_44)
			{
				case 0:
					func_11(&uVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
					func_10(&uVar0);
					iLocal_45 = unk_0x48E480685981C7D4();
					iLocal_44 = 1;
					break;
				
				case 1:
					if ((unk_0x48E480685981C7D4() - iLocal_45) > 3000)
					{
						func_9(&uVar0);
						iLocal_44 = 2;
					}
					break;
			}
			if (func_1(&uVar0, 0))
			{
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(var uParam0, bool bParam1)
{
	if (!func_8(&(uParam0->f_2)))
	{
		func_6(&(uParam0->f_2));
	}
	unk_0xC9A352663D97EFC3(14);
	unk_0x7F3AA121397DEEC9(1);
	unk_0xD45896EF84BD41C8(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
	if (bParam1)
	{
		if (unk_0xCAD9951C953F5B2D(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_3(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_2(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_3(var uParam0)
{
	if (func_8(uParam0))
	{
		if (func_5(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_4(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_4(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		iVar0 = unk_0xD74C7D8D2E5E43D2();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
}

bool func_5(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 2);
}

void func_6(var uParam0)
{
	func_7(uParam0, 0f);
}

void func_7(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_4(unk_0x236D8AD7EE179F46(*uParam0, 4)) - fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_8(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 1);
}

void func_9(var uParam0)
{
	uParam0->f_1 = 300;
	func_6(&(uParam0->f_2));
	unk_0x21ED0FC9B5CC748B(*uParam0, "SPLASH_TEXT_TRANSITION_OUT");
	unk_0xBD0C54D89298454E(300);
	unk_0xBA9BA6181F2B6111();
}

void func_10(var uParam0)
{
	unk_0x21ED0FC9B5CC748B(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
	unk_0xBA9BA6181F2B6111();
}

void func_11(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	uParam0->f_1 = -1;
	unk_0x21ED0FC9B5CC748B(*uParam0, "SPLASH_TEXT_LABEL");
	func_12(sParam1);
	unk_0xBD0C54D89298454E(iParam2);
	unk_0xBD0C54D89298454E(iParam3);
	unk_0xBD0C54D89298454E(iParam4);
	unk_0xBD0C54D89298454E(iParam5);
	unk_0xBA9BA6181F2B6111();
	if (bParam6)
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
		unk_0xBA9BA6181F2B6111();
	}
}

void func_12(var uParam0)
{
	unk_0x6CE839BF5D87A428(uParam0);
	unk_0xC3822F70D0E7940B();
}

var func_13()
{
	return unk_0x95EF972E3A07B525("SPLASH_TEXT");
}

