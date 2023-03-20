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
	if (unk_0x29AFA2493D7C23D0())
	{
		unk_0xAE2B1C30F8A0B67C(500);
	}
	if (unk_0x8D841F1DD3FA555F(3))
	{
		func_5();
	}
	uLocal_18 = unk_0x95EF972E3A07B525("instructional_buttons");
	while (!unk_0xCC8E3BAC62A29F42(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x88188CE25DF2572C(uLocal_18, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_17, uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x21ED0FC9B5CC748B(uParam1, "CLEAR_ALL");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_CLEAR_SPACE");
			unk_0xBD0C54D89298454E(200);
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(0);
			func_3(unk_0x2576ED87DB06844F(2, 191, 1));
			func_2("PRESS A");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(1);
			func_3(unk_0x2576ED87DB06844F(2, 194, 1));
			func_2("PRESS B");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(2);
			func_3(unk_0x2576ED87DB06844F(2, 193, 1));
			func_2("PRESS X");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(3);
			func_3(unk_0x2576ED87DB06844F(2, 192, 1));
			func_2("PRESS Y");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(80);
			unk_0xBA9BA6181F2B6111();
			iLocal_17 = -1;
			break;
		
		case 1:
			unk_0x21ED0FC9B5CC748B(uParam1, "CLEAR_ALL");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_CLEAR_SPACE");
			unk_0xBD0C54D89298454E(200);
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(0);
			func_3(unk_0x2576ED87DB06844F(2, 187, 1));
			func_2("DOWN");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(1);
			func_3(unk_0x2576ED87DB06844F(2, 188, 1));
			func_2("UP");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(2);
			func_3(unk_0x2576ED87DB06844F(2, 190, 1));
			func_2("LEFT");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(3);
			func_3(unk_0x2576ED87DB06844F(2, 189, 1));
			func_2("RIGHT");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(80);
			unk_0xBA9BA6181F2B6111();
			iLocal_17 = -1;
			break;
		
		case 2:
			unk_0x21ED0FC9B5CC748B(uParam1, "CLEAR_ALL");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_CLEAR_SPACE");
			unk_0xBD0C54D89298454E(200);
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_DATA_SLOT");
			unk_0xBD0C54D89298454E(0);
			func_3(unk_0x2576ED87DB06844F(2, 202, 1));
			func_2("BACK");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(80);
			unk_0xBA9BA6181F2B6111();
			iLocal_17 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

void func_3(var uParam0)
{
	unk_0x1F704997074F9C16(uParam0);
}

void func_4()
{
	if (Global_14373 == 0)
	{
		if (((((((((unk_0xCAD9951C953F5B2D(2, 189) || unk_0xCAD9951C953F5B2D(2, 190)) || unk_0xCAD9951C953F5B2D(2, 188)) || unk_0xCAD9951C953F5B2D(2, 187)) || unk_0xCAD9951C953F5B2D(2, 205)) || unk_0xCAD9951C953F5B2D(2, 206)) || unk_0xCAD9951C953F5B2D(2, 207)) || unk_0xCAD9951C953F5B2D(2, 208)) || unk_0xCAD9951C953F5B2D(2, 201)) || unk_0xCAD9951C953F5B2D(2, 202))
		{
			Global_14373 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14373 = 0;
	}
	if (Global_14373 == 0)
	{
		if (unk_0xCAD9951C953F5B2D(2, 217))
		{
			iLocal_17 = 1;
		}
		if (unk_0xCAD9951C953F5B2D(2, 189))
		{
			iLocal_17 = 2;
		}
		if (unk_0xCAD9951C953F5B2D(2, 190))
		{
			iLocal_17 = 2;
		}
		if (unk_0xCAD9951C953F5B2D(2, 205))
		{
		}
		if (unk_0xCAD9951C953F5B2D(2, 206))
		{
		}
		if (unk_0xCAD9951C953F5B2D(2, 207))
		{
		}
		if (unk_0xCAD9951C953F5B2D(2, 208))
		{
		}
		if (unk_0xCAD9951C953F5B2D(2, 188))
		{
			iLocal_17 = 2;
		}
		if (unk_0xCAD9951C953F5B2D(2, 187))
		{
			iLocal_17 = 2;
		}
		if (unk_0xCAD9951C953F5B2D(2, 201))
		{
			iLocal_17 = 1;
		}
		if (unk_0xCAD9951C953F5B2D(2, 202))
		{
			iLocal_17 = 0;
		}
		if (unk_0xCAD9951C953F5B2D(2, 203))
		{
			iLocal_17 = 1;
		}
		if (unk_0xCAD9951C953F5B2D(2, 204))
		{
			iLocal_17 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0xD338B0444EFB8C65(0);
	unk_0x4B6F01DE8CCE643E(&uLocal_18);
	unk_0xC23A229F78DAD92A();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_11();
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
		}
		Global_14394.f_1 = 1;
		if (func_10(0))
		{
			func_7(0);
		}
	}
	else if (Global_14394.f_1 == 1)
	{
		if (!Global_14394.f_1 == 0)
		{
			Global_14394.f_1 = 3;
		}
	}
}

void func_7(int iParam0)
{
	if (Global_14552)
	{
		func_9(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_8())
	{
		Global_14394.f_1 = 3;
	}
}

int func_8()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	if (Global_14394.f_1 == 9 || Global_14394.f_1 == 10)
	{
		Global_15746 = 0;
		Global_15742 = 1;
	}
}

