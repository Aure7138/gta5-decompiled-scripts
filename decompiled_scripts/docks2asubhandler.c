#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x2170E7BC25114A22(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0xF44A5E894FE76438(uLocal_2, 1))
	{
		if (!unk_0xF44A5E894FE76438(uLocal_2, 0))
		{
			if (unk_0x7887B64A08364778(uLocal_0))
			{
				if (unk_0xA4DB44DF73EF4FE5(uLocal_0, 0))
				{
					unk_0xC53606C390BE2727(uLocal_0, 0, 1);
					unk_0xBBAF4B768DDB7572(uLocal_0, 1);
					unk_0x490BF4D8A55D8ECA(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x7887B64A08364778(uLocal_1))
					{
						unk_0xC53606C390BE2727(uLocal_1, 0, 1);
						unk_0xBBAF4B768DDB7572(uLocal_1, 1);
						unk_0x490BF4D8A55D8ECA(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xB8A73E7DA87B2968(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA4DB44DF73EF4FE5(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xB8A73E7DA87B2968(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0xBB5DD90D4926F21A(uLocal_0))
				{
					unk_0xB8A73E7DA87B2968(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xB8A73E7DA87B2968(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0xB24D3BF5DABD13AA(&uLocal_0);
	unk_0x9E5138EA66A3E119(&uLocal_1);
	unk_0x01DFCA3621B68C4A();
}

