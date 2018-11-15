import csv, os


from sqlalchemy import create_engine
from sqlalchemy.orm import scoped_session, sessionmaker

engine = create_engine(os.getenv("DATABASE_URL"))
db = scoped_session(sessionmaker(bind=engine))


def main():
    f = open("flights.csv")
    reader = csv.reader(f)

    for name, haircolor in reader:
        db.execute(
            "INSERT INTO students (name, haircolor) VALUES (:name, :haircolor)",
            {"name": name, "haircolor": haircolor }
        )
        print(f"Added Student {name} with haircolor {haircolor}")

        db.commit()


if __name__ == "__main__":
    main()