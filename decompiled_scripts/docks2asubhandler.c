#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x7547D7CF93115D6D(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0x61D8FEAF64881CDA(uLocal_2, 1))
	{
		if (!unk_0x61D8FEAF64881CDA(uLocal_2, 0))
		{
			if (unk_0xFD68187442384158(uLocal_0))
			{
				if (unk_0xCA8794CE207FC6D5(uLocal_0, 0))
				{
					unk_0xBAE5DF507EEC53C8(uLocal_0, 0, 1);
					unk_0x479E7EEEBDEE245D(uLocal_0, 1);
					unk_0x9FD46396C2DAB482(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0xFD68187442384158(uLocal_1))
					{
						unk_0xBAE5DF507EEC53C8(uLocal_1, 0, 1);
						unk_0x479E7EEEBDEE245D(uLocal_1, 1);
						unk_0x9FD46396C2DAB482(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x3DBE2A7AF9E71C82(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0xCA8794CE207FC6D5(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x3DBE2A7AF9E71C82(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x9226425D9E480D72(uLocal_0))
				{
					unk_0x3DBE2A7AF9E71C82(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0x3DBE2A7AF9E71C82(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0xB67623A401171555(&uLocal_0);
	unk_0x9720CE176AF721DF(&uLocal_1);
	unk_0x883793591E631A3B();
}

