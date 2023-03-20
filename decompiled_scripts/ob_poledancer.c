#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	var uLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	char* sLocal_8 = NULL;
	int iLocal_9 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (unk_0x538DF9E5B1DF01EB(uScriptParam_0))
	{
		unk_0x3CC3106305C40A28(uScriptParam_0, 1);
		Local_2 = { unk_0xA783C6007920169C(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0xD1613577C809E98B(uScriptParam_0);
		unk_0x6A23C3306A8CF21B(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x538DF9E5B1DF01EB(uScriptParam_0))
		{
			if (unk_0xC3AF8259DB162ECA(uScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0x6A23C3306A8CF21B(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x2DE0B96E966FD817(uLocal_1))
						{
							unk_0xFC75211D7BD0539E(uLocal_1, -1);
							unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 1);
							unk_0x2686393074E14730(uLocal_1, 1);
							unk_0x82706E6C897B0FA1();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0xE44A580B551C3645(uLocal_1))
	{
		if (!unk_0x98666858610065B8(uLocal_1))
		{
			unk_0x51A89CCC8A5317D0(&uLocal_1);
		}
		else
		{
			unk_0x2686393074E14730(uLocal_1, 1);
		}
	}
	unk_0x82706E6C897B0FA1();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (!unk_0x2DE0B96E966FD817(uLocal_1))
		{
			if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xBF8ADDCADFC4691E(uLocal_1, unk_0xA16EC202D9D35357(), 1))
			{
				return 1;
			}
			if (unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x2DE0B96E966FD817(uLocal_1))
	{
		if (unk_0x221AC1EF116F6053(uLocal_1, -2017877118) == 7)
		{
			unk_0x5B5659C49032B96C(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x9AD704CAE5698619(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x5B5659C49032B96C(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x95EDB2DEFA5BB405(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x11CF427D48EC6B68(uLocal_1, sLocal_8, sLocal_6, unk_0x1E253A1A83763D22(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xE44A580B551C3645(uLocal_1))
	{
		uLocal_1 = unk_0x6F9DE0DE8363ADF1(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x6F12B0DE0D6D7E2F(uLocal_1, 0);
		unk_0xA8BC819B54F5B824(uLocal_1, 0);
		unk_0x2C4E82CF88213975(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x939DA7EBCC6588FF(iLocal_7);
	unk_0x3D28909AF30D70F4(sLocal_8);
	if (unk_0x5494F37F35C1D7D7(iLocal_7) && unk_0x6C47E32491756A1A(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x939DA7EBCC6588FF(iLocal_7);
		unk_0x3D28909AF30D70F4(sLocal_8);
	}
	return 0;
}

