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
	if (unk_0xC1EDB61CE0A4B94E(uScriptParam_0))
	{
		unk_0x93F4FB97D1F2E7A1(uScriptParam_0, 1);
		Local_2 = { unk_0xF42E2289B33D5C38(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x3CAD22C2D36A7F14(uScriptParam_0);
		unk_0xE110948ECF59689C(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC1EDB61CE0A4B94E(uScriptParam_0))
		{
			if (unk_0xF956B5861E255755(uScriptParam_0))
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
							unk_0xE110948ECF59689C(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0xCFC04A38F256EE06(uLocal_1))
						{
							unk_0x366AD87F9FB096E3(uLocal_1, -1);
							unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 1);
							unk_0x97C5D2BB8E47131D(uLocal_1, 1);
							unk_0xF5DF8F3392CDD07B();
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
	if (!unk_0xBDA1F5E8A36BFA07(uLocal_1, 0))
	{
		if (!unk_0xE72EEEBA742753B0(uLocal_1))
		{
			unk_0xDAF1451794AD09A3(&uLocal_1);
		}
		else
		{
			unk_0x97C5D2BB8E47131D(uLocal_1, 1);
		}
	}
	unk_0xF5DF8F3392CDD07B();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (!unk_0xCFC04A38F256EE06(uLocal_1))
		{
			if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x1D58D319587D567F(uLocal_1, unk_0x06736567F820A39E(), 1))
			{
				return 1;
			}
			if (unk_0x0280B42925DCFDEC(unk_0x06736567F820A39E(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x98D424FE7497139D(unk_0x06736567F820A39E()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0xCFC04A38F256EE06(uLocal_1))
	{
		if (unk_0xFB900D9EE2ACC400(uLocal_1, -2017877118) == 7)
		{
			unk_0x28B5966B12DC5B0F(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x3425A082B365746C(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x28B5966B12DC5B0F(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x46E9388908C80483(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x8B950944C37E128D(uLocal_1, sLocal_8, sLocal_6, unk_0x83D8CBE6E641FA2A(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xBDA1F5E8A36BFA07(uLocal_1, 0))
	{
		uLocal_1 = unk_0xB500796AAD639F82(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x7B16B2475ABB1ADC(uLocal_1, 0);
		unk_0xA26A1133034ECD59(uLocal_1, 0);
		unk_0xBA63517ADBC1E5E3(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0xBECC89ACB4E5D4ED(iLocal_7);
	unk_0x198E497B820DA913(sLocal_8);
	if (unk_0x5C9FE32E2FF37989(iLocal_7) && unk_0x7B43775D6E0D7325(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0xBECC89ACB4E5D4ED(iLocal_7);
		unk_0x198E497B820DA913(sLocal_8);
	}
	return 0;
}

