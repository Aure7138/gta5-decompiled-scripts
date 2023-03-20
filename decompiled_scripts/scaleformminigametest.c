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
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	uLocal_20 = unk_0x1802011F6E339FFF(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0x2CC731F9E664299E())
	{
		unk_0xCA6D671341405469(500);
	}
	if (unk_0x4B4BD87E3D30C50D(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x2F14983962462691("p_bubblegum");
	while (!unk_0xEDE19C6ED6E2F478(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			uLocal_19 = unk_0x6AC24FEF1D81F105("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0x06F36936289C5EC8(uLocal_19))
			{
				unk_0x38A0FD089D493A96(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0xF9A5067F84CD30E8(uLocal_19, 0.01f);
				unk_0x8B0E6796AEBB50EA(uLocal_19, 0.02f);
				unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
			}
			unk_0x06E25D9668199664(uLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x50137349427F6296(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14392 == 0)
	{
		if (unk_0xE721293454745300(2, 189) || unk_0xE721293454745300(2, 190))
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
		if (unk_0x618071F6827C232E(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0xE721293454745300(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0xE721293454745300(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0x758017413321C628(uParam0, "SET_INPUT_EVENT");
			unk_0x4D57F6B69CCB6D95(10);
			unk_0xBA93E45C163C745D(fLocal_25);
			unk_0x098CA28C04E62E55();
		}
		if (unk_0x618071F6827C232E(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0xE721293454745300(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0xE721293454745300(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0x758017413321C628(uParam0, "SET_INPUT_EVENT");
			unk_0x4D57F6B69CCB6D95(11);
			unk_0xBA93E45C163C745D(fLocal_28);
			unk_0x098CA28C04E62E55();
		}
		if (unk_0x618071F6827C232E(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0xE721293454745300(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0xE721293454745300(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0x758017413321C628(uParam0, "SET_INPUT_EVENT");
			unk_0x4D57F6B69CCB6D95(8);
			unk_0xBA93E45C163C745D(fLocal_31);
			unk_0x098CA28C04E62E55();
		}
		if (unk_0x618071F6827C232E(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0xE721293454745300(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0xE721293454745300(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0x758017413321C628(uParam0, "SET_INPUT_EVENT");
			unk_0x4D57F6B69CCB6D95(9);
			unk_0xBA93E45C163C745D(fLocal_34);
			unk_0x098CA28C04E62E55();
		}
		if (unk_0x618071F6827C232E(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0xE721293454745300(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0xE721293454745300(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0x758017413321C628(uParam0, "SET_INPUT_EVENT");
			unk_0x4D57F6B69CCB6D95(17);
			unk_0xBA93E45C163C745D(fLocal_37);
			unk_0x098CA28C04E62E55();
		}
		if (unk_0x618071F6827C232E(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0xE721293454745300(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0xE721293454745300(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0x758017413321C628(uParam0, "SET_INPUT_EVENT");
			unk_0x4D57F6B69CCB6D95(15);
			unk_0xBA93E45C163C745D(fLocal_40);
			unk_0x098CA28C04E62E55();
		}
		if (unk_0x618071F6827C232E(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0xE721293454745300(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0xE721293454745300(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0x758017413321C628(uParam0, "SET_INPUT_EVENT");
			unk_0x4D57F6B69CCB6D95(16);
			unk_0xBA93E45C163C745D(fLocal_43);
			unk_0x098CA28C04E62E55();
		}
		if (unk_0x618071F6827C232E(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0xE721293454745300(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0xE721293454745300(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0x758017413321C628(uParam0, "SET_INPUT_EVENT");
			unk_0x4D57F6B69CCB6D95(14);
			unk_0xBA93E45C163C745D(fLocal_46);
			unk_0x098CA28C04E62E55();
		}
	}
}

void func_2()
{
	if (unk_0x06F36936289C5EC8(uLocal_19))
	{
		unk_0xFE65076A204F9258(uLocal_19, 0);
	}
	unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0xADD55DEFB7B8CB4F(0);
	unk_0x4ACCE973F9C3CA3B(1);
	unk_0xD2E03CEA477E4E3D(&uLocal_18);
	unk_0x2F798BA2098FDADE();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x573691DB812DC8AA(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (Global_14571)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14413.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)
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

void func_8()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

