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
	if (unk_0x6ADD12BF4D6D2587(uScriptParam_0))
	{
		unk_0xEDC33A771FAEB393(uScriptParam_0, 1);
		Local_2 = { unk_0x3F90543934DCD7E6(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0xF0371FE6E2BF9599(uScriptParam_0);
		unk_0xB18E1DBC397238E1(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x6ADD12BF4D6D2587(uScriptParam_0))
		{
			if (unk_0xC8F310BD22DD910A(uScriptParam_0))
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
							unk_0xB18E1DBC397238E1(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x3AB6A1A9084FB0A4(uLocal_1))
						{
							unk_0xF21E6EBE8EFDCC28(uLocal_1, -1);
							unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
							unk_0xE9B3D12A64CC7C1A(uLocal_1, 1);
							unk_0x96A3D9A8A4C7AFD4();
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
	if (!unk_0x191BE1BC8F26F3C1(uLocal_1, 0))
	{
		if (!unk_0x841ED61760A7D07B(uLocal_1))
		{
			unk_0x68433819717660CF(&uLocal_1);
		}
		else
		{
			unk_0xE9B3D12A64CC7C1A(uLocal_1, 1);
		}
	}
	unk_0x96A3D9A8A4C7AFD4();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uLocal_1))
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xEBE499597C718EB8(uLocal_1, unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
			if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x3AB6A1A9084FB0A4(uLocal_1))
	{
		if (unk_0x78F50AA8F955BEFC(uLocal_1, -2017877118) == 7)
		{
			unk_0x12C9D41D52A560D6(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x0F89A4E8C59BFAAF(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x12C9D41D52A560D6(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0xA5F6598E13F98E08(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0xCBF5827EA5303F2B(uLocal_1, sLocal_8, sLocal_6, unk_0x5B811202FCBE9E9D(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x191BE1BC8F26F3C1(uLocal_1, 0))
	{
		uLocal_1 = unk_0xAC992EFAD62C33BF(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x230697B667C63948(uLocal_1, 0);
		unk_0x5C5D33A1B2711D21(uLocal_1, 0);
		unk_0x771A86309E0CA47B(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x6FF834D85E2DD4C6(iLocal_7);
	unk_0x6450931B826B49D9(sLocal_8);
	if (unk_0x9A0B2ED5055D3F0B(iLocal_7) && unk_0x3A801AA34DD821BE(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x6FF834D85E2DD4C6(iLocal_7);
		unk_0x6450931B826B49D9(sLocal_8);
	}
	return 0;
}

