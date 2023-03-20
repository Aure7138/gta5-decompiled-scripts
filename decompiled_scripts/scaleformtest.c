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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
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
	if (unk_0x2CC731F9E664299E())
	{
		unk_0xCA6D671341405469(500);
	}
	if (unk_0x4B4BD87E3D30C50D(3))
	{
		func_5();
	}
	uLocal_19 = unk_0x2F14983962462691("instructional_buttons");
	while (!unk_0xEDE19C6ED6E2F478(uLocal_19))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0xE636AA747867BC3D(uLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, uLocal_19);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x758017413321C628(uParam1, "CLEAR_ALL");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_CLEAR_SPACE");
			unk_0x4D57F6B69CCB6D95(200);
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_DATA_SLOT");
			unk_0x4D57F6B69CCB6D95(0);
			func_3(unk_0x7DD16933DB23299D(2, 191, 1));
			func_2("PRESS A");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_DATA_SLOT");
			unk_0x4D57F6B69CCB6D95(1);
			func_3(unk_0x7DD16933DB23299D(2, 194, 1));
			func_2("PRESS B");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_DATA_SLOT");
			unk_0x4D57F6B69CCB6D95(2);
			func_3(unk_0x7DD16933DB23299D(2, 193, 1));
			func_2("PRESS X");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_DATA_SLOT");
			unk_0x4D57F6B69CCB6D95(3);
			func_3(unk_0x7DD16933DB23299D(2, 192, 1));
			func_2("PRESS Y");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(80);
			unk_0x098CA28C04E62E55();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0x758017413321C628(uParam1, "CLEAR_ALL");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_CLEAR_SPACE");
			unk_0x4D57F6B69CCB6D95(200);
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_DATA_SLOT");
			unk_0x4D57F6B69CCB6D95(0);
			func_3(unk_0x7DD16933DB23299D(2, 187, 1));
			func_2("DOWN");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_DATA_SLOT");
			unk_0x4D57F6B69CCB6D95(1);
			func_3(unk_0x7DD16933DB23299D(2, 188, 1));
			func_2("UP");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_DATA_SLOT");
			unk_0x4D57F6B69CCB6D95(2);
			func_3(unk_0x7DD16933DB23299D(2, 190, 1));
			func_2("LEFT");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_DATA_SLOT");
			unk_0x4D57F6B69CCB6D95(3);
			func_3(unk_0x7DD16933DB23299D(2, 189, 1));
			func_2("RIGHT");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(80);
			unk_0x098CA28C04E62E55();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0x758017413321C628(uParam1, "CLEAR_ALL");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_CLEAR_SPACE");
			unk_0x4D57F6B69CCB6D95(200);
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_DATA_SLOT");
			unk_0x4D57F6B69CCB6D95(0);
			func_3(unk_0x7DD16933DB23299D(2, 202, 1));
			func_2("BACK");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(80);
			unk_0x098CA28C04E62E55();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0xC976485333F81CE8(sParam0);
	unk_0xC8C5D5B9E15EB2E2();
}

void func_3(var uParam0)
{
	unk_0x2747B3A98BE1082E(uParam0);
}

void func_4()
{
	if (Global_14392 == 0)
	{
		if (((((((((unk_0xE721293454745300(2, 189) || unk_0xE721293454745300(2, 190)) || unk_0xE721293454745300(2, 188)) || unk_0xE721293454745300(2, 187)) || unk_0xE721293454745300(2, 205)) || unk_0xE721293454745300(2, 206)) || unk_0xE721293454745300(2, 207)) || unk_0xE721293454745300(2, 208)) || unk_0xE721293454745300(2, 201)) || unk_0xE721293454745300(2, 202))
		{
			Global_14392 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14392 = 0;
	}
	if (Global_14392 == 0)
	{
		if (unk_0xE721293454745300(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0xE721293454745300(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0xE721293454745300(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0xE721293454745300(2, 205))
		{
		}
		if (unk_0xE721293454745300(2, 206))
		{
		}
		if (unk_0xE721293454745300(2, 207))
		{
		}
		if (unk_0xE721293454745300(2, 208))
		{
		}
		if (unk_0xE721293454745300(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0xE721293454745300(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0xE721293454745300(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0xE721293454745300(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0xE721293454745300(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0xE721293454745300(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0xADD55DEFB7B8CB4F(0);
	unk_0xD2E03CEA477E4E3D(&uLocal_19);
	unk_0x2F798BA2098FDADE();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_11();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x573691DB812DC8AA(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_10(0))
		{
			func_7(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_7(int iParam0)
{
	if (Global_14571)
	{
		func_9(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x573691DB812DC8AA(&Global_2284, 16);
	}
	if (unk_0xEA9C2A206A86B744())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 30);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 30);
	}
	if (!func_8())
	{
		Global_14413.f_1 = 3;
	}
}

int func_8()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
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
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3E337B53281459DC(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x4317F0DBC6457B31(Global_14350);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
}

int func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

