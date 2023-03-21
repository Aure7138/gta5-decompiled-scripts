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
	if (unk_0xC844350D5D58C99A(uScriptParam_0))
	{
		unk_0x1E9649458B15960F(uScriptParam_0, 1);
		Local_2 = { unk_0x68E4ADDDDCD7BDDE(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0xD9522BA9E27E1349(uScriptParam_0);
		unk_0x20641932E5104B25(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC844350D5D58C99A(uScriptParam_0))
		{
			if (unk_0x63D2C15453688621(uScriptParam_0))
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
							unk_0x20641932E5104B25(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0xEB6A8945D1AC98A1(uLocal_1))
						{
							unk_0x8BE3D040D15AEA1D(uLocal_1, -1);
							unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
							unk_0xFADC0A217229F6B5(uLocal_1, 1);
							unk_0x10FAF14A60A0DBE1();
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
	if (!unk_0x437347B10A200C4B(uLocal_1, 0))
	{
		if (!unk_0x0A059E0DB9253280(uLocal_1))
		{
			unk_0xEBA53F35D0085654(&uLocal_1);
		}
		else
		{
			unk_0xFADC0A217229F6B5(uLocal_1, 1);
		}
	}
	unk_0x10FAF14A60A0DBE1();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(uLocal_1))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xB87D13D0C064E9D1(uLocal_1, unk_0x16F2683693E537C9(), 1))
			{
				return 1;
			}
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0xEB6A8945D1AC98A1(uLocal_1))
	{
		if (unk_0xD1960163A3042274(uLocal_1, -2017877118) == 7)
		{
			unk_0xC6EB89C59F2AF6B8(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xFCCE56DAE67AA889(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0xC6EB89C59F2AF6B8(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0xB4ECF989E2C1DAC8(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x4E6D1F54D3FBC5B1(uLocal_1, sLocal_8, sLocal_6, unk_0x79833B02DBD2A244(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x437347B10A200C4B(uLocal_1, 0))
	{
		uLocal_1 = unk_0x36F2404464202779(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0xC743BD39A24D0583(uLocal_1, 0);
		unk_0x25C5402CC10F76CD(uLocal_1, 0);
		unk_0x11AD11297DC58CC7(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x523BCC9DC80CD82F(iLocal_7);
	unk_0x3F423BF5B8125A50(sLocal_8);
	if (unk_0xB87F6CF6E5628C67(iLocal_7) && unk_0xB4AE0788C1587752(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(iLocal_7);
		unk_0x3F423BF5B8125A50(sLocal_8);
	}
	return 0;
}

