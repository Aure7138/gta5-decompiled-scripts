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
	if (unk_0xFD68187442384158(uScriptParam_0))
	{
		unk_0x479E7EEEBDEE245D(uScriptParam_0, 1);
		Local_2 = { unk_0x0CAFB9D38494283D(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0xA9D6B28E708753B6(uScriptParam_0);
		unk_0xCC8C6873CFB069A4(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xFD68187442384158(uScriptParam_0))
		{
			if (unk_0xDBBE1D10A2F589A7(uScriptParam_0))
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
							unk_0xCC8C6873CFB069A4(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x9F94F2CFDCA78C55(uLocal_1))
						{
							unk_0x5FD5E7ABD766D498(uLocal_1, -1);
							unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
							unk_0xA1E4BA3B17C6D931(uLocal_1, 1);
							unk_0x883793591E631A3B();
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
	if (!unk_0xE5D56342B0FF1D0D(uLocal_1))
	{
		if (!unk_0x9226425D9E480D72(uLocal_1))
		{
			unk_0x8019BB3BA236A900(&uLocal_1);
		}
		else
		{
			unk_0xA1E4BA3B17C6D931(uLocal_1, 1);
		}
	}
	unk_0x883793591E631A3B();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (!unk_0x9F94F2CFDCA78C55(uLocal_1))
		{
			if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x6255AE2591FE7603(uLocal_1, unk_0x507DA4994C3D8EBD(), 1))
			{
				return 1;
			}
			if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x9F94F2CFDCA78C55(uLocal_1))
	{
		if (unk_0xEC043AB2FEE0E94F(uLocal_1, -2017877118) == 7)
		{
			unk_0xEC0A546609840086(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xD58C0ABFAF258340(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0xEC0A546609840086(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x22605DE2E6933CF2(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0xADF6DEFE940F56B0(uLocal_1, sLocal_8, sLocal_6, unk_0x01E9A2D3AF075537(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xE5D56342B0FF1D0D(uLocal_1))
	{
		uLocal_1 = unk_0x7B88529CAE3B7F15(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x146FCBEC0D4289BF(uLocal_1, 0);
		unk_0x6A750A31D18DA81A(uLocal_1, 0);
		unk_0x2DC5B31EBB810396(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0xCBE6AC5010E5CE5C(iLocal_7);
	unk_0x395C5D98343F0040(sLocal_8);
	if (unk_0xD291857D0C9C7FEC(iLocal_7) && unk_0xCE40391AB65FE305(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0xCBE6AC5010E5CE5C(iLocal_7);
		unk_0x395C5D98343F0040(sLocal_8);
	}
	return 0;
}

